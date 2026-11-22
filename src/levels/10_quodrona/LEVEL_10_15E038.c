/* LEVEL_10:0x15E038 -- placement copy of LEVEL_01_164A28.c: sets up the HUD handles: registers two draw lists, stores the three layer ids in the packed words, creates the three layer entries and the two shared effect handles. */
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

extern Cfg D_002A11C0;
extern int D_0021018C;
extern int D_00210190;
extern int D_00210194;
extern int D_00210198;
extern unsigned int D_0021019C;
extern unsigned int D_002101A0;
extern unsigned int D_002101A4;
extern Layer D_002101A8[3];
extern char D_001085A8[];
extern char D_00108CA8[];

extern int func_108CE0(int a, int b, int c, int d, int e, int f, char *g, char *h);
extern int func_06D638(int a);
extern int func_10AAC0(int a);

void func_15E038(void)
{
    unsigned int i;

    D_0021018C = func_108CE0(11, D_002A11C0.w_34, 0, 0, 1, 3, D_001085A8, D_00108CA8);
    D_00210190 = func_108CE0(10, D_002A11C0.w_04, 0, 0, 0, 1, D_001085A8, D_00108CA8);
    D_0021019C = (D_0021019C & 0xF800FFFF) | (D_002A11C0.w_14C << 16);
    D_002101A0 = (D_002101A0 & 0xF800FFFF) | (D_002A11C0.w_94 << 16);
    D_002101A4 = (D_002101A4 & 0xF800FFFF) | (D_002A11C0.w_34 << 16);
    for (i = 0; i < 3; i++) {
        D_002101A8[i].w_10 = func_06D638(D_002101A4);
    }
    if (D_00210194 == -1) {
        D_00210194 = func_10AAC0((D_002A11C0.w_28 << 16) | 0x800030C5);
    }
    if (D_00210198 == -1) {
        D_00210198 = func_10AAC0((D_002A11C0.w_28 << 16) | 0x88003045);
    }
}
