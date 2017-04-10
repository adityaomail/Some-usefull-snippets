import sys

string_1 = input("Write your poem")

iterate_list = string_1.split(' ')
c=0
for i in iterate_list:
    if(i[0].isupper()):
        if(c==0):
            sys.stdout.write('\n\t'+i+' ')
            #sys.stdout.write(i+" ")
            c+=1
        elif(c==1):
            sys.stdout.write('\n\t\t'+i+' ')
            #sys.stdout.write(i+" ")
            c+=1
        elif(c==2):
            sys.stdout.write('\n\t\t\t'+i+' ')
            #sys.stdout.write(i+" ")
            c=0
    else: sys.stdout.write(i+' ')
