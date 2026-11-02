extern char D_0029E988[];
extern char D_0028BD88[];
extern int D_001E57A0[];
extern int D_001E53A0[];
extern char D_001E53B0[];
extern int D_001E5794[];
extern int D_001E5798[];
extern int g_TEXMGR_LastTex;

void *memset(void *, int, unsigned int);
int func_09E488(char *, int, int, int, int, int);

void func_09D350(void) {
    D_001E57A0[0] = 0;
    memset(D_0029E988, 0, 0xc00);
    memset(D_0028BD88, 0, 0x12c00);
    g_TEXMGR_LastTex = 0xBEBEBEBE;
    D_001E5794[0] = func_09E488(D_001E53B0, D_001E53A0[0], 1, 0, 0, 0);
    D_001E5798[0] = func_09E488(D_001E53B0, D_001E53A0[0], 1, 0, 0, 0);
}
