/* LEVEL_18:0x13DB70 -- placement copy of LEVEL_01_164A28.c: sets up the HUD handles: registers two draw lists, stores the three layer ids in the packed words, creates the three layer entries and the two shared effect handles. */
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

extern Cfg D_0024E5C0;
extern int D_001BEC4C;
extern int D_001BEC50;
extern int D_001BEC54;
extern int D_001BEC58;
extern unsigned int D_001BEC5C;
extern unsigned int D_001BEC60;
extern unsigned int D_001BEC64;
extern Layer D_001BEC68[3];
extern char D_000E9DC0[];
extern char D_000EA4C0[];

extern int func_0EA4F8(int a, int b, int c, int d, int e, int f, char *g, char *h);
extern int func_05D918(int a);
extern int func_0EB7A8(int a);

void func_13DB70(void)
{
    unsigned int i;

    D_001BEC4C = func_0EA4F8(11, D_0024E5C0.w_34, 0, 0, 1, 3, D_000E9DC0, D_000EA4C0);
    D_001BEC50 = func_0EA4F8(10, D_0024E5C0.w_04, 0, 0, 0, 1, D_000E9DC0, D_000EA4C0);
    D_001BEC5C = (D_001BEC5C & 0xF800FFFF) | (D_0024E5C0.w_14C << 16);
    D_001BEC60 = (D_001BEC60 & 0xF800FFFF) | (D_0024E5C0.w_94 << 16);
    D_001BEC64 = (D_001BEC64 & 0xF800FFFF) | (D_0024E5C0.w_34 << 16);
    for (i = 0; i < 3; i++) {
        D_001BEC68[i].w_10 = func_05D918(D_001BEC64);
    }
    if (D_001BEC54 == -1) {
        D_001BEC54 = func_0EB7A8((D_0024E5C0.w_28 << 16) | 0x800030C5);
    }
    if (D_001BEC58 == -1) {
        D_001BEC58 = func_0EB7A8((D_0024E5C0.w_28 << 16) | 0x88003045);
    }
}
