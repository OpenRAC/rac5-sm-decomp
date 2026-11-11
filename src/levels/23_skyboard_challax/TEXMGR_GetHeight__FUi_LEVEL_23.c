extern char D_00270448[];
extern char *func_0974F8(char *);

unsigned int TEXMGR_GetHeight__FUi(int index) {
    return ((unsigned short *)func_0974F8(D_00270448 + index * 100))[5];
}
