extern char D_0010EC88[];

extern char *func_005C68(char *);

unsigned int TEXMGR_GetWidth__FUi(int i)
{
    return ((unsigned short *)func_005C68(D_0010EC88 + i * 0x64))[4];
}
