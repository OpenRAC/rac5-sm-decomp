/* LEVEL_03:0x15EEF8 -- placement copy of LEVEL_01_164A28.c: sets up the HUD handles: registers two draw lists, stores the three layer ids in the packed words, creates the three layer entries and the two shared effect handles. */
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

extern Cfg D_002B2C40;
extern int D_0021FBD4;
extern int D_0021FBD8;
extern int D_0021FBDC;
extern int D_0021FBE0;
extern unsigned int D_0021FBE4;
extern unsigned int D_0021FBE8;
extern unsigned int D_0021FBEC;
extern Layer D_0021FBF0[3];
extern char D_00106C68[];
extern char D_00107368[];

extern int func_1073A0(int a, int b, int c, int d, int e, int f, char *g, char *h);
extern int func_06CDA8(int a);
extern int func_108650(int a);

void func_15EEF8(void)
{
    unsigned int i;

    D_0021FBD4 = func_1073A0(11, D_002B2C40.w_34, 0, 0, 1, 3, D_00106C68, D_00107368);
    D_0021FBD8 = func_1073A0(10, D_002B2C40.w_04, 0, 0, 0, 1, D_00106C68, D_00107368);
    D_0021FBE4 = (D_0021FBE4 & 0xF800FFFF) | (D_002B2C40.w_14C << 16);
    D_0021FBE8 = (D_0021FBE8 & 0xF800FFFF) | (D_002B2C40.w_94 << 16);
    D_0021FBEC = (D_0021FBEC & 0xF800FFFF) | (D_002B2C40.w_34 << 16);
    for (i = 0; i < 3; i++) {
        D_0021FBF0[i].w_10 = func_06CDA8(D_0021FBEC);
    }
    if (D_0021FBDC == -1) {
        D_0021FBDC = func_108650((D_002B2C40.w_28 << 16) | 0x800030C5);
    }
    if (D_0021FBE0 == -1) {
        D_0021FBE0 = func_108650((D_002B2C40.w_28 << 16) | 0x88003045);
    }
}
