/* LEVEL_17:0x13DC90 -- placement copy of LEVEL_01_164A28.c: sets up the HUD handles: registers two draw lists, stores the three layer ids in the packed words, creates the three layer entries and the two shared effect handles. */
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

extern Cfg D_0023F540;
extern int D_001B0DBC;
extern int D_001B0DC0;
extern int D_001B0DC4;
extern int D_001B0DC8;
extern unsigned int D_001B0DCC;
extern unsigned int D_001B0DD0;
extern unsigned int D_001B0DD4;
extern Layer D_001B0DD8[3];
extern char D_000EAF28[];
extern char D_000EB628[];

extern int func_0EB660(int a, int b, int c, int d, int e, int f, char *g, char *h);
extern int func_05E7F8(int a);
extern int func_0EC910(int a);

void func_13DC90(void)
{
    unsigned int i;

    D_001B0DBC = func_0EB660(11, D_0023F540.w_34, 0, 0, 1, 3, D_000EAF28, D_000EB628);
    D_001B0DC0 = func_0EB660(10, D_0023F540.w_04, 0, 0, 0, 1, D_000EAF28, D_000EB628);
    D_001B0DCC = (D_001B0DCC & 0xF800FFFF) | (D_0023F540.w_14C << 16);
    D_001B0DD0 = (D_001B0DD0 & 0xF800FFFF) | (D_0023F540.w_94 << 16);
    D_001B0DD4 = (D_001B0DD4 & 0xF800FFFF) | (D_0023F540.w_34 << 16);
    for (i = 0; i < 3; i++) {
        D_001B0DD8[i].w_10 = func_05E7F8(D_001B0DD4);
    }
    if (D_001B0DC4 == -1) {
        D_001B0DC4 = func_0EC910((D_0023F540.w_28 << 16) | 0x800030C5);
    }
    if (D_001B0DC8 == -1) {
        D_001B0DC8 = func_0EC910((D_0023F540.w_28 << 16) | 0x88003045);
    }
}
