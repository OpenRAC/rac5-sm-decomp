extern char D_0029F008[];
extern char *func_0A07B0(char *);

unsigned int TEXMGR_GetHeight__FUi(int index) {
    return ((unsigned short *)func_0A07B0(D_0029F008 + index * 100))[5];
}
