/* LEVEL_09:0x157000 -- placement copy of LEVEL_01_164A28.c: sets up the HUD handles: registers two draw lists, stores the three layer ids in the packed words, creates the three layer entries and the two shared effect handles. */
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

extern Cfg D_0027F540;
extern int D_001F1004;
extern int D_001F1008;
extern int D_001F100C;
extern int D_001F1010;
extern unsigned int D_001F1014;
extern unsigned int D_001F1018;
extern unsigned int D_001F101C;
extern Layer D_001F1020[3];
extern char D_001042B0[];
extern char D_001049B0[];

extern int func_1049E8(int a, int b, int c, int d, int e, int f, char *g, char *h);
extern int func_06B020(int a);
extern int func_105C98(int a);

void func_157000(void)
{
    unsigned int i;

    D_001F1004 = func_1049E8(11, D_0027F540.w_34, 0, 0, 1, 3, D_001042B0, D_001049B0);
    D_001F1008 = func_1049E8(10, D_0027F540.w_04, 0, 0, 0, 1, D_001042B0, D_001049B0);
    D_001F1014 = (D_001F1014 & 0xF800FFFF) | (D_0027F540.w_14C << 16);
    D_001F1018 = (D_001F1018 & 0xF800FFFF) | (D_0027F540.w_94 << 16);
    D_001F101C = (D_001F101C & 0xF800FFFF) | (D_0027F540.w_34 << 16);
    for (i = 0; i < 3; i++) {
        D_001F1020[i].w_10 = func_06B020(D_001F101C);
    }
    if (D_001F100C == -1) {
        D_001F100C = func_105C98((D_0027F540.w_28 << 16) | 0x800030C5);
    }
    if (D_001F1010 == -1) {
        D_001F1010 = func_105C98((D_0027F540.w_28 << 16) | 0x88003045);
    }
}
