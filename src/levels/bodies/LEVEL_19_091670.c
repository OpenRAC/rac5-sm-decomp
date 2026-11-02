extern char D_002698D8[];
extern char D_00256CD8[];
extern int D_001A59F0[];
extern int D_001A55F0[];
extern char D_001A5600[];
extern int D_001A59E4[];
extern int D_001A59E8[];
extern int g_TEXMGR_LastTex;

void *memset(void *, int, unsigned int);
int func_0926B8(char *, int, int, int, int, int);

void func_091670(void) {
    D_001A59F0[0] = 0;
    memset(D_002698D8, 0, 0xc00);
    memset(D_00256CD8, 0, 0x12c00);
    g_TEXMGR_LastTex = 0xBEBEBEBE;
    D_001A59E4[0] = func_0926B8(D_001A5600, D_001A55F0[0], 1, 0, 0, 0);
    D_001A59E8[0] = func_0926B8(D_001A5600, D_001A55F0[0], 1, 0, 0, 0);
}
