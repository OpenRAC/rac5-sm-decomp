extern char D_0026AEC8[];
extern char *func_09A030(char *);

unsigned int TEXMGR_GetWidth__FUi(int index) {
    return ((unsigned short *)func_09A030(D_0026AEC8 + index * 100))[4];
}
