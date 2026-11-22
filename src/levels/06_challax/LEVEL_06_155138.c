/* LEVEL_06:0x155138 -- placement copy of LEVEL_01_164A28.c: sets up the HUD handles: registers two draw lists, stores the three layer ids in the packed words, creates the three layer entries and the two shared effect handles. */
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

extern Cfg D_00284B40;
extern int D_001F610C;
extern int D_001F6110;
extern int D_001F6114;
extern int D_001F6118;
extern unsigned int D_001F611C;
extern unsigned int D_001F6120;
extern unsigned int D_001F6124;
extern Layer D_001F6128[3];
extern char D_00101490[];
extern char D_00101B90[];

extern int func_101BC8(int a, int b, int c, int d, int e, int f, char *g, char *h);
extern int func_06B1E0(int a);
extern int func_102E78(int a);

void func_155138(void)
{
    unsigned int i;

    D_001F610C = func_101BC8(11, D_00284B40.w_34, 0, 0, 1, 3, D_00101490, D_00101B90);
    D_001F6110 = func_101BC8(10, D_00284B40.w_04, 0, 0, 0, 1, D_00101490, D_00101B90);
    D_001F611C = (D_001F611C & 0xF800FFFF) | (D_00284B40.w_14C << 16);
    D_001F6120 = (D_001F6120 & 0xF800FFFF) | (D_00284B40.w_94 << 16);
    D_001F6124 = (D_001F6124 & 0xF800FFFF) | (D_00284B40.w_34 << 16);
    for (i = 0; i < 3; i++) {
        D_001F6128[i].w_10 = func_06B1E0(D_001F6124);
    }
    if (D_001F6114 == -1) {
        D_001F6114 = func_102E78((D_00284B40.w_28 << 16) | 0x800030C5);
    }
    if (D_001F6118 == -1) {
        D_001F6118 = func_102E78((D_00284B40.w_28 << 16) | 0x88003045);
    }
}
