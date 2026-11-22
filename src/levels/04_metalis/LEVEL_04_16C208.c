/* LEVEL_04:0x16C208 -- placement copy of LEVEL_01_164A28.c: sets up the HUD handles: registers two draw lists, stores the three layer ids in the packed words, creates the three layer entries and the two shared effect handles. */
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

extern Cfg D_002B25C0;
extern int D_00220C7C;
extern int D_00220C80;
extern int D_00220C84;
extern int D_00220C88;
extern unsigned int D_00220C8C;
extern unsigned int D_00220C90;
extern unsigned int D_00220C94;
extern Layer D_00220C98[3];
extern char D_00114508[];
extern char D_00114C08[];

extern int func_114C40(int a, int b, int c, int d, int e, int f, char *g, char *h);
extern int func_070000(int a);
extern int func_115EF0(int a);

void func_16C208(void)
{
    unsigned int i;

    D_00220C7C = func_114C40(11, D_002B25C0.w_34, 0, 0, 1, 3, D_00114508, D_00114C08);
    D_00220C80 = func_114C40(10, D_002B25C0.w_04, 0, 0, 0, 1, D_00114508, D_00114C08);
    D_00220C8C = (D_00220C8C & 0xF800FFFF) | (D_002B25C0.w_14C << 16);
    D_00220C90 = (D_00220C90 & 0xF800FFFF) | (D_002B25C0.w_94 << 16);
    D_00220C94 = (D_00220C94 & 0xF800FFFF) | (D_002B25C0.w_34 << 16);
    for (i = 0; i < 3; i++) {
        D_00220C98[i].w_10 = func_070000(D_00220C94);
    }
    if (D_00220C84 == -1) {
        D_00220C84 = func_115EF0((D_002B25C0.w_28 << 16) | 0x800030C5);
    }
    if (D_00220C88 == -1) {
        D_00220C88 = func_115EF0((D_002B25C0.w_28 << 16) | 0x88003045);
    }
}
