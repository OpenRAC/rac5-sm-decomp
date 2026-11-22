/* LEVEL_08:0x176960 -- placement copy of LEVEL_01_164A28.c: sets up the HUD handles: registers two draw lists, stores the three layer ids in the packed words, creates the three layer entries and the two shared effect handles. */
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

extern Cfg D_002E7040;
extern int D_00250764;
extern int D_00250768;
extern int D_0025076C;
extern int D_00250770;
extern unsigned int D_00250774;
extern unsigned int D_00250778;
extern unsigned int D_0025077C;
extern Layer D_00250780[3];
extern char D_00119058[];
extern char D_00119758[];

extern int func_119790(int a, int b, int c, int d, int e, int f, char *g, char *h);
extern int func_073C68(int a);
extern int func_11AA40(int a);

void func_176960(void)
{
    unsigned int i;

    D_00250764 = func_119790(11, D_002E7040.w_34, 0, 0, 1, 3, D_00119058, D_00119758);
    D_00250768 = func_119790(10, D_002E7040.w_04, 0, 0, 0, 1, D_00119058, D_00119758);
    D_00250774 = (D_00250774 & 0xF800FFFF) | (D_002E7040.w_14C << 16);
    D_00250778 = (D_00250778 & 0xF800FFFF) | (D_002E7040.w_94 << 16);
    D_0025077C = (D_0025077C & 0xF800FFFF) | (D_002E7040.w_34 << 16);
    for (i = 0; i < 3; i++) {
        D_00250780[i].w_10 = func_073C68(D_0025077C);
    }
    if (D_0025076C == -1) {
        D_0025076C = func_11AA40((D_002E7040.w_28 << 16) | 0x800030C5);
    }
    if (D_00250770 == -1) {
        D_00250770 = func_11AA40((D_002E7040.w_28 << 16) | 0x88003045);
    }
}
