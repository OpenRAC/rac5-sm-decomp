/* LEVEL_19:0x13EF18 -- placement copy of LEVEL_01_164A28.c: sets up the HUD handles: registers two draw lists, stores the three layer ids in the packed words, creates the three layer entries and the two shared effect handles. */
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

extern Cfg D_0024E3C0;
extern int D_001BE93C;
extern int D_001BE940;
extern int D_001BE944;
extern int D_001BE948;
extern unsigned int D_001BE94C;
extern unsigned int D_001BE950;
extern unsigned int D_001BE954;
extern Layer D_001BE958[3];
extern char D_000EBBD0[];
extern char D_000EC2D0[];

extern int func_0EC308(int a, int b, int c, int d, int e, int f, char *g, char *h);
extern int func_05E228(int a);
extern int func_0ED5B8(int a);

void func_13EF18(void)
{
    unsigned int i;

    D_001BE93C = func_0EC308(11, D_0024E3C0.w_34, 0, 0, 1, 3, D_000EBBD0, D_000EC2D0);
    D_001BE940 = func_0EC308(10, D_0024E3C0.w_04, 0, 0, 0, 1, D_000EBBD0, D_000EC2D0);
    D_001BE94C = (D_001BE94C & 0xF800FFFF) | (D_0024E3C0.w_14C << 16);
    D_001BE950 = (D_001BE950 & 0xF800FFFF) | (D_0024E3C0.w_94 << 16);
    D_001BE954 = (D_001BE954 & 0xF800FFFF) | (D_0024E3C0.w_34 << 16);
    for (i = 0; i < 3; i++) {
        D_001BE958[i].w_10 = func_05E228(D_001BE954);
    }
    if (D_001BE944 == -1) {
        D_001BE944 = func_0ED5B8((D_0024E3C0.w_28 << 16) | 0x800030C5);
    }
    if (D_001BE948 == -1) {
        D_001BE948 = func_0ED5B8((D_0024E3C0.w_28 << 16) | 0x88003045);
    }
}
