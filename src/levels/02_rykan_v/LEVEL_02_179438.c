/* LEVEL_02:0x179438 -- placement copy of LEVEL_01_164A28.c: sets up the HUD handles: registers two draw lists, stores the three layer ids in the packed words, creates the three layer entries and the two shared effect handles. */
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

extern Cfg D_002AF2C0;
extern int D_0021C68C;
extern int D_0021C690;
extern int D_0021C694;
extern int D_0021C698;
extern unsigned int D_0021C69C;
extern unsigned int D_0021C6A0;
extern unsigned int D_0021C6A4;
extern Layer D_0021C6A8[3];
extern char D_0010E580[];
extern char D_0010EC80[];

extern int func_10ECB8(int a, int b, int c, int d, int e, int f, char *g, char *h);
extern int func_0738A0(int a);
extern int func_10FF68(int a);

void func_179438(void)
{
    unsigned int i;

    D_0021C68C = func_10ECB8(11, D_002AF2C0.w_34, 0, 0, 1, 3, D_0010E580, D_0010EC80);
    D_0021C690 = func_10ECB8(10, D_002AF2C0.w_04, 0, 0, 0, 1, D_0010E580, D_0010EC80);
    D_0021C69C = (D_0021C69C & 0xF800FFFF) | (D_002AF2C0.w_14C << 16);
    D_0021C6A0 = (D_0021C6A0 & 0xF800FFFF) | (D_002AF2C0.w_94 << 16);
    D_0021C6A4 = (D_0021C6A4 & 0xF800FFFF) | (D_002AF2C0.w_34 << 16);
    for (i = 0; i < 3; i++) {
        D_0021C6A8[i].w_10 = func_0738A0(D_0021C6A4);
    }
    if (D_0021C694 == -1) {
        D_0021C694 = func_10FF68((D_002AF2C0.w_28 << 16) | 0x800030C5);
    }
    if (D_0021C698 == -1) {
        D_0021C698 = func_10FF68((D_002AF2C0.w_28 << 16) | 0x88003045);
    }
}
