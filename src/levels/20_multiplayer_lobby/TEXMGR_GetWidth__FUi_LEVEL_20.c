extern char D_0017A398[];
extern char *func_07A170(char *);

unsigned int TEXMGR_GetWidth__FUi(int index) {
    return ((unsigned short *)func_07A170(D_0017A398 + index * 100))[4];
}
