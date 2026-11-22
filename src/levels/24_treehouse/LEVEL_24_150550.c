/* LEVEL_24:0x150550 -- placement copy of LEVEL_01_164A28.c: sets up the HUD handles: registers two draw lists, stores the three layer ids in the packed words, creates the three layer entries and the two shared effect handles. */
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

extern Cfg D_00263C80;
extern int D_001D8474;
extern int D_001D8478;
extern int D_001D847C;
extern int D_001D8480;
extern unsigned int D_001D8484;
extern unsigned int D_001D8488;
extern unsigned int D_001D848C;
extern Layer D_001D8490[3];
extern char D_000FFFE0[];
extern char D_001006E0[];

extern int func_100718(int a, int b, int c, int d, int e, int f, char *g, char *h);
extern int func_067A60(int a);
extern int func_1019C8(int a);

void func_150550(void)
{
    unsigned int i;

    D_001D8474 = func_100718(11, D_00263C80.w_34, 0, 0, 1, 3, D_000FFFE0, D_001006E0);
    D_001D8478 = func_100718(10, D_00263C80.w_04, 0, 0, 0, 1, D_000FFFE0, D_001006E0);
    D_001D8484 = (D_001D8484 & 0xF800FFFF) | (D_00263C80.w_14C << 16);
    D_001D8488 = (D_001D8488 & 0xF800FFFF) | (D_00263C80.w_94 << 16);
    D_001D848C = (D_001D848C & 0xF800FFFF) | (D_00263C80.w_34 << 16);
    for (i = 0; i < 3; i++) {
        D_001D8490[i].w_10 = func_067A60(D_001D848C);
    }
    if (D_001D847C == -1) {
        D_001D847C = func_1019C8((D_00263C80.w_28 << 16) | 0x800030C5);
    }
    if (D_001D8480 == -1) {
        D_001D8480 = func_1019C8((D_00263C80.w_28 << 16) | 0x88003045);
    }
}
