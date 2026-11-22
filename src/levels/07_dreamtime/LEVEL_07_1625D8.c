/* LEVEL_07:0x1625D8 -- placement copy of LEVEL_01_164A28.c: sets up the HUD handles: registers two draw lists, stores the three layer ids in the packed words, creates the three layer entries and the two shared effect handles. */
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

extern Cfg D_002AD6C0;
extern int D_0021B82C;
extern int D_0021B830;
extern int D_0021B834;
extern int D_0021B838;
extern unsigned int D_0021B83C;
extern unsigned int D_0021B840;
extern unsigned int D_0021B844;
extern Layer D_0021B848[3];
extern char D_0010B908[];
extern char D_0010C008[];

extern int func_10C040(int a, int b, int c, int d, int e, int f, char *g, char *h);
extern int func_06F2A0(int a);
extern int func_10D2F0(int a);

void func_1625D8(void)
{
    unsigned int i;

    D_0021B82C = func_10C040(11, D_002AD6C0.w_34, 0, 0, 1, 3, D_0010B908, D_0010C008);
    D_0021B830 = func_10C040(10, D_002AD6C0.w_04, 0, 0, 0, 1, D_0010B908, D_0010C008);
    D_0021B83C = (D_0021B83C & 0xF800FFFF) | (D_002AD6C0.w_14C << 16);
    D_0021B840 = (D_0021B840 & 0xF800FFFF) | (D_002AD6C0.w_94 << 16);
    D_0021B844 = (D_0021B844 & 0xF800FFFF) | (D_002AD6C0.w_34 << 16);
    for (i = 0; i < 3; i++) {
        D_0021B848[i].w_10 = func_06F2A0(D_0021B844);
    }
    if (D_0021B834 == -1) {
        D_0021B834 = func_10D2F0((D_002AD6C0.w_28 << 16) | 0x800030C5);
    }
    if (D_0021B838 == -1) {
        D_0021B838 = func_10D2F0((D_002AD6C0.w_28 << 16) | 0x88003045);
    }
}
