extern char D_001B7048[];
extern char *func_081118(char *);

unsigned int func_084618(int index) {
    return ((unsigned short *)func_081118(D_001B7048 + index * 100))[5];
}
