extern char D_0028AEC8[];
extern char *func_09ED68(char *);

unsigned int TEXMGR_GetWidth__FUi(int index) {
    return ((unsigned short *)func_09ED68(D_0028AEC8 + index * 100))[4];
}
