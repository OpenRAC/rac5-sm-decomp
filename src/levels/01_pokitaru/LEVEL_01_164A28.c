/* LEVEL_01:0x164A28 -- sets up the HUD handles: registers two draw lists, stores the three layer ids in the packed words, creates the three layer entries and the two shared effect handles. */
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

extern Cfg D_00297DC0;
extern int D_00207544;
extern int D_00207548;
extern int D_0020754C;
extern int D_00207550;
extern unsigned int D_00207554;
extern unsigned int D_00207558;
extern unsigned int D_0020755C;
extern Layer D_00207560[3];
extern char D_001083D0[];
extern char D_00108AD0[];

extern int func_108B08(int a, int b, int c, int d, int e, int f, char *g, char *h);
extern int func_06E420(int a);
extern int func_109DB8(int a);

void func_164A28(void)
{
    unsigned int i;

    D_00207544 = func_108B08(11, D_00297DC0.w_34, 0, 0, 1, 3, D_001083D0, D_00108AD0);
    D_00207548 = func_108B08(10, D_00297DC0.w_04, 0, 0, 0, 1, D_001083D0, D_00108AD0);
    D_00207554 = (D_00207554 & 0xF800FFFF) | (D_00297DC0.w_14C << 16);
    D_00207558 = (D_00207558 & 0xF800FFFF) | (D_00297DC0.w_94 << 16);
    D_0020755C = (D_0020755C & 0xF800FFFF) | (D_00297DC0.w_34 << 16);
    for (i = 0; i < 3; i++) {
        D_00207560[i].w_10 = func_06E420(D_0020755C);
    }
    if (D_0020754C == -1) {
        D_0020754C = func_109DB8((D_00297DC0.w_28 << 16) | 0x800030C5);
    }
    if (D_00207550 == -1) {
        D_00207550 = func_109DB8((D_00297DC0.w_28 << 16) | 0x88003045);
    }
}
