extern char D_00121888[];
extern char D_0010EC88[];
extern int D_0002B160[];
extern int D_0002AD40[];
extern char D_0002AD50[];
extern int D_0002B154[];
extern int D_0002B158[];
extern int g_TEXMGR_LastTex;

void *memset(void *, int, unsigned int);
int func_008AC0(char *, int, int, int, int, int);

void func_007B38(void)
{
    D_0002B160[0] = 0;
    memset(D_00121888, 0, 0xC00);
    memset(D_0010EC88, 0, 0x12C00);
    g_TEXMGR_LastTex = 0xBEBEBEBE;
    D_0002B154[0] = func_008AC0(D_0002AD50, D_0002AD40[0], 1, 0, 0, 0);
    D_0002B158[0] = func_008AC0(D_0002AD50, D_0002AD40[0], 1, 0, 0, 0);
}
