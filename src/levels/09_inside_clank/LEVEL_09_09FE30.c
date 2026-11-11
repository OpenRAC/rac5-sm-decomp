extern char D_00299388[];
extern char D_00286788[];
extern int D_001E06A0[];
extern int D_001E02A0[];
extern char D_001E02B0[];
extern int D_001E0694[];
extern int D_001E0698[];
extern int g_TEXMGR_LastTex;

void *memset(void *, int, unsigned int);
int func_0A0F68(char *, int, int, int, int, int);

void func_09FE30(void) {
    D_001E06A0[0] = 0;
    memset(D_00299388, 0, 0xc00);
    memset(D_00286788, 0, 0x12c00);
    g_TEXMGR_LastTex = 0xBEBEBEBE;
    D_001E0694[0] = func_0A0F68(D_001E02B0, D_001E02A0[0], 1, 0, 0, 0);
    D_001E0698[0] = func_0A0F68(D_001E02B0, D_001E02A0[0], 1, 0, 0, 0);
}
