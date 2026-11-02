extern char D_00269AD8[];
extern char D_00256ED8[];
extern int D_001A5CF0[];
extern int D_001A58F0[];
extern char D_001A5900[];
extern int D_001A5CE4[];
extern int D_001A5CE8[];
extern int g_TEXMGR_LastTex;

void *memset(void *, int, unsigned int);
int func_091E38(char *, int, int, int, int, int);

void func_090DF0(void) {
    D_001A5CF0[0] = 0;
    memset(D_00269AD8, 0, 0xc00);
    memset(D_00256ED8, 0, 0x12c00);
    g_TEXMGR_LastTex = 0xBEBEBEBE;
    D_001A5CE4[0] = func_091E38(D_001A5900, D_001A58F0[0], 1, 0, 0, 0);
    D_001A5CE8[0] = func_091E38(D_001A5900, D_001A58F0[0], 1, 0, 0, 0);
}
