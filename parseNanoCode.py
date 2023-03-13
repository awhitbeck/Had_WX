


f = open("input.txt", "r")
for line in f :
    #print(line[:-1])
    ## remove comments
    index=''
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
        #print('index: ',index)
    line = line.split('//')[0]
    line = line.split(';')[0]
    while "  " in line :
        line = line.replace("  "," ",1)
    if line[0] == ' ':
        line = line[1:]
    words = line.split(' ')
    words[1] = words[1].split('[')[0]
    #print(words)
    if index == '':
        print("branch_map_"+words[0]+".insert( std::pair<string,"+words[0]+"*>( \""+words[1]+"\" , &"+words[1]+" ) ) ;")
    else :
        print("branch_map_"+words[0]+".insert( std::pair<string,"+words[0]+"*>( \""+words[1]+"\" , "+words[1]+" ) ) ; //"+index)
