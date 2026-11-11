extern char D_002B9E88[];
extern char *func_0A0538(char *);

unsigned int TEXMGR_GetWidth__FUi(int index) {
    return ((unsigned short *)func_0A0538(D_002B9E88 + index * 100))[4];
}
