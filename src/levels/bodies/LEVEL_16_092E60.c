extern char D_00256B58[];
extern char *func_08FA70(char *);

unsigned int func_092E60(int index) {
    return ((unsigned short *)func_08FA70(D_00256B58 + index * 100))[4];
}
