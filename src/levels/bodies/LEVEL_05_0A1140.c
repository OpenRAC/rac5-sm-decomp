extern char D_0029DAC8[];
extern char D_0028AEC8[];
extern int D_001E5C20[];
extern int D_001E5820[];
extern char D_001E5830[];
extern int D_001E5C14[];
extern int D_001E5C18[];
extern int g_TEXMGR_LastTex;

void *memset(void *, int, unsigned int);
int func_0A2278(char *, int, int, int, int, int);

void func_0A1140(void) {
    D_001E5C20[0] = 0;
    memset(D_0029DAC8, 0, 0xc00);
    memset(D_0028AEC8, 0, 0x12c00);
    g_TEXMGR_LastTex = 0xBEBEBEBE;
    D_001E5C14[0] = func_0A2278(D_001E5830, D_001E5820[0], 1, 0, 0, 0);
    D_001E5C18[0] = func_0A2278(D_001E5830, D_001E5820[0], 1, 0, 0, 0);
}
