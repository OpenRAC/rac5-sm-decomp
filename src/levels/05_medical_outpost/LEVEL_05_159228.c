/* LEVEL_05:0x159228 -- placement copy of LEVEL_01_164A28.c: sets up the HUD handles: registers two draw lists, stores the three layer ids in the packed words, creates the three layer entries and the two shared effect handles. */
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

extern Cfg D_00283C80;
extern int D_001F657C;
extern int D_001F6580;
extern int D_001F6584;
extern int D_001F6588;
extern unsigned int D_001F658C;
extern unsigned int D_001F6590;
extern unsigned int D_001F6594;
extern Layer D_001F6598[3];
extern char D_00105AB0[];
extern char D_001061B0[];

extern int func_1061E8(int a, int b, int c, int d, int e, int f, char *g, char *h);
extern int func_06C088(int a);
extern int func_107F80(int a);

void func_159228(void)
{
    unsigned int i;

    D_001F657C = func_1061E8(11, D_00283C80.w_34, 0, 0, 1, 3, D_00105AB0, D_001061B0);
    D_001F6580 = func_1061E8(10, D_00283C80.w_04, 0, 0, 0, 1, D_00105AB0, D_001061B0);
    D_001F658C = (D_001F658C & 0xF800FFFF) | (D_00283C80.w_14C << 16);
    D_001F6590 = (D_001F6590 & 0xF800FFFF) | (D_00283C80.w_94 << 16);
    D_001F6594 = (D_001F6594 & 0xF800FFFF) | (D_00283C80.w_34 << 16);
    for (i = 0; i < 3; i++) {
        D_001F6598[i].w_10 = func_06C088(D_001F6594);
    }
    if (D_001F6584 == -1) {
        D_001F6584 = func_107F80((D_00283C80.w_28 << 16) | 0x800030C5);
    }
    if (D_001F6588 == -1) {
        D_001F6588 = func_107F80((D_00283C80.w_28 << 16) | 0x88003045);
    }
}
