extern char D_00247E58[];
extern char *func_08EF68(char *);

unsigned int TEXMGR_GetWidth__FUi(int index) {
    return ((unsigned short *)func_08EF68(D_00247E58 + index * 100))[4];
}
