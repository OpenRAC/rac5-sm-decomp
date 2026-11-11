extern char D_00286788[];
extern char *func_09DA68(char *);

unsigned int TEXMGR_GetWidth__FUi(int index) {
    return ((unsigned short *)func_09DA68(D_00286788 + index * 100))[4];
}
