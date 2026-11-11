extern char D_002B6508[];
extern char *func_0A70C8(char *);

unsigned int TEXMGR_GetWidth__FUi(int index) {
    return ((unsigned short *)func_0A70C8(D_002B6508 + index * 100))[4];
}
