/* LEVEL_23:0x158320 -- placement copy of LEVEL_01_164A28.c: sets up the HUD handles: registers two draw lists, stores the three layer ids in the packed words, creates the three layer entries and the two shared effect handles. */
typedef struct {
    char pad00[4];
    int w_04;
    char pad08[0x20];
    int w_28;
    char pad2C[8];
    int w_34;
    char pad38[0x5C];
    int w_94;
    char pad98[0xB4];
    int w_14C;
} Cfg;

typedef struct {
    char pad00[0x10];
    int w_10;
    char pad14[0x30];
} Layer;

extern Cfg D_00269200;
extern int D_001DAC8C;
extern int D_001DAC90;
extern int D_001DAC94;
extern int D_001DAC98;
extern unsigned int D_001DAC9C;
extern unsigned int D_001DACA0;
extern unsigned int D_001DACA4;
extern Layer D_001DACA8[3];
extern char D_000FB2B8[];
extern char D_000FB9B8[];

extern int func_0FB9F0(int a, int b, int c, int d, int e, int f, char *g, char *h);
extern int func_067BC8(int a);
extern int func_0FCCA0(int a);

void func_158320(void)
{
    unsigned int i;

    D_001DAC8C = func_0FB9F0(11, D_00269200.w_34, 0, 0, 1, 3, D_000FB2B8, D_000FB9B8);
    D_001DAC90 = func_0FB9F0(10, D_00269200.w_04, 0, 0, 0, 1, D_000FB2B8, D_000FB9B8);
    D_001DAC9C = (D_001DAC9C & 0xF800FFFF) | (D_00269200.w_14C << 16);
    D_001DACA0 = (D_001DACA0 & 0xF800FFFF) | (D_00269200.w_94 << 16);
    D_001DACA4 = (D_001DACA4 & 0xF800FFFF) | (D_00269200.w_34 << 16);
    for (i = 0; i < 3; i++) {
        D_001DACA8[i].w_10 = func_067BC8(D_001DACA4);
    }
    if (D_001DAC94 == -1) {
        D_001DAC94 = func_0FCCA0((D_00269200.w_28 << 16) | 0x800030C5);
    }
    if (D_001DAC98 == -1) {
        D_001DAC98 = func_0FCCA0((D_00269200.w_28 << 16) | 0x88003045);
    }
}
