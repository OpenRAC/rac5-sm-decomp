extern char D_001F4BC8[];
extern char *func_08EE30(char *);

unsigned int func_092300(int index) {
    return ((unsigned short *)func_08EE30(D_001F4BC8 + index * 100))[4];
}
