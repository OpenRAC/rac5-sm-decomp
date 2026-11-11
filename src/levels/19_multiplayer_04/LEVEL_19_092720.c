extern char D_00256CD8[];
extern char *func_08F308(char *);

unsigned int func_092720(int index) {
    return ((unsigned short *)func_08F308(D_00256CD8 + index * 100))[5];
}
