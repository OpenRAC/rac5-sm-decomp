extern char D_002B4908[];
extern char *func_0A27B8(char *);

unsigned int TEXMGR_GetWidth__FUi(int index) {
    return ((unsigned short *)func_0A27B8(D_002B4908 + index * 100))[4];
}
