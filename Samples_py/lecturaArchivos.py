
file_in = './entrada/file1.in'

file_out = './salida/file1.out'

with open(file_in, 'r') as myFile, open (file_out, 'w') as outFile:
    for line in myFile:
        print(line)
        outFile.write(f'{(line[:-1])[::-1]}\n')