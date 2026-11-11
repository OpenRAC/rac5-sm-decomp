extern char D_00256CD8[];
extern char *func_08F308(char *);

unsigned int TEXMGR_GetWidth__FUi(int index) {
    return ((unsigned short *)func_08F308(D_00256CD8 + index * 100))[4];
}
