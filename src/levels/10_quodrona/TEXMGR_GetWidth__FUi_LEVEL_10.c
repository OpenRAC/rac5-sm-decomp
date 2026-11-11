extern char D_002A8408[];
extern char *func_0A1890(char *);

unsigned int TEXMGR_GetWidth__FUi(int index) {
    return ((unsigned short *)func_0A1890(D_002A8408 + index * 100))[4];
}
