/* LEVEL_16:0x142280 -- placement copy of LEVEL_01_164A28.c: sets up the HUD handles: registers two draw lists, stores the three layer ids in the packed words, creates the three layer entries and the two shared effect handles. */
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

extern Cfg D_0024E240;
extern int D_001BD7F4;
extern int D_001BD7F8;
extern int D_001BD7FC;
extern int D_001BD800;
extern unsigned int D_001BD804;
extern unsigned int D_001BD808;
extern unsigned int D_001BD80C;
extern Layer D_001BD810[3];
extern char D_000EC000[];
extern char D_000EC700[];

extern int func_0EC738(int a, int b, int c, int d, int e, int f, char *g, char *h);
extern int func_05EE08(int a);
extern int func_0ED9E8(int a);

void func_142280(void)
{
    unsigned int i;

    D_001BD7F4 = func_0EC738(11, D_0024E240.w_34, 0, 0, 1, 3, D_000EC000, D_000EC700);
    D_001BD7F8 = func_0EC738(10, D_0024E240.w_04, 0, 0, 0, 1, D_000EC000, D_000EC700);
    D_001BD804 = (D_001BD804 & 0xF800FFFF) | (D_0024E240.w_14C << 16);
    D_001BD808 = (D_001BD808 & 0xF800FFFF) | (D_0024E240.w_94 << 16);
    D_001BD80C = (D_001BD80C & 0xF800FFFF) | (D_0024E240.w_34 << 16);
    for (i = 0; i < 3; i++) {
        D_001BD810[i].w_10 = func_05EE08(D_001BD80C);
    }
    if (D_001BD7FC == -1) {
        D_001BD7FC = func_0ED9E8((D_0024E240.w_28 << 16) | 0x800030C5);
    }
    if (D_001BD800 == -1) {
        D_001BD800 = func_0ED9E8((D_0024E240.w_28 << 16) | 0x88003045);
    }
}
