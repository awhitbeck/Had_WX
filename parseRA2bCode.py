
debug=False

f = open("ra2b_input.txt", "r")
type_list=[]
type_list_code=[]
for line in f :
    if debug : print(line[:-1])
    ## remove comments
    index='' ## this means the branch is an array with an Int_t denote the number of objects
    if '//[' in line :
        index = line.split('//[')[1]
        if '[' in index :
            index = index.replace('[','')
        if ']' in index :
            index = index.replace(']','')
        if ' ' in index:
            index = index.replace(' ','')
        if '\n' in index:
            index = index.replace('\n','')
        if debug : print('index: ',index)
    vector=False
    if '*' in line :
        vector=True
        if debug : print('|||VECTOR|||')
    line = line.split('//')[0]
    line = line.split(';')[0]
    while "  " in line :
        line = line.replace("  "," ",1)
    if line[0] == ' ':
        line = line[1:]
    words = line.split(' ')
    words[1] = words[1].split('[')[0]
    words[1] = words[1].replace('*','')
    code = words[0]
    if not code in type_list_code :
        type_list_code.append(code)
    words[0] = words[0].replace('<','_')
    words[0] = words[0].replace('>','')
    if not words[0] in type_list :
        type_list.append(words[0])    
    if debug : print(words)

        
    if index == '':
        if vector :
            print("branch_map_"+words[0]+".insert( std::pair<string,"+code+"* >( \""+words[1]+"\" , "+words[1]+" ) ) ;")
        else :
            print("branch_map_"+words[0]+".insert( std::pair<string,"+code+"*>( \""+words[1]+"\" , &"+words[1]+" ) ) ;")
    else :
        print("branch_map_"+words[0]+".insert( std::pair<string,"+code+"*>( \""+words[1]+"\" , "+words[1]+" ) ) ; //"+index)

for t,c in list(zip(type_list,type_list_code)) :
    print("std::map<string,"+c+" > branch_map_"+t+";")
