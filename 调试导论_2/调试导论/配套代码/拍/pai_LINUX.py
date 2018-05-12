from os import system

for i in range(100):
    system("./maker 10 >in")
    system("./brute <in >bout")
    system("./std <in >sout")

    if(system("diff -bB bout sout")):
        print("GG")
        exit(0)
    print("Passed %d..."%i)
    system("sleep 1")
