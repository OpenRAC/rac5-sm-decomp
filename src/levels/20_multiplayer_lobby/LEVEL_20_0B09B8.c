/* LEVEL_20:0x0B09B8 -- placement copy of FRONTEND_013F20.c: resets the list widget state, places its frame rectangle at (x, y) and refreshes the six rows. */
typedef struct {
    char pad0[0x14];
    int w14;
} Frame;

typedef struct {
    int p;
    char pad4[0x14];
} Row;

typedef struct {
    int w0;
    int w4;
    Row row[1];
} Table;

extern Frame D_0019E9B8;
extern char D_0019E998[0x20];
extern Table D_00116C18;
extern int D_00116BDC;
extern int D_00116BE0;
extern int D_00116BE8;
extern int D_00116BF8;
extern int D_00116C08;
extern int D_00116C10;

extern void *memset(void *p, int v, unsigned int n);
extern void func_0B0958(int a);
extern void func_0874F0(float f, int a, int *r);
extern int func_081408(int *r);
extern int func_081438(int *r);
extern int func_081468(int *r);
extern int func_081520(int *r);
extern void func_0841C8(void *p, short a, short b, short c, short d, unsigned int col);
extern int func_087440(int a, int b);

void func_0B09B8(int x, int y)
{
    int r[4];
    unsigned int i;

    i = 0;
    func_0B0958(0);
    D_00116BE8 = 1;
    memset(D_0019E998, 0, 0x20);
    D_00116BF8 = 0;
    D_00116C08 = 0;
    D_0019E9B8.w14 = 0;
    D_00116C10 = 0;
    func_0874F0(0.0f, D_00116C18.w4, r);
    D_00116BDC = x - func_081408(r);
    D_00116BE0 = y - func_081438(r);
    r[0] += D_00116BDC;
    r[2] += D_00116BDC;
    r[1] += D_00116BE0;
    r[3] += D_00116BE0;
    func_0841C8(&D_0019E9B8, func_081408(r), func_081438(r), func_081468(r), func_081520(r), 0x40602020);
    D_0019E9B8.w14 = 0;
    do {
        i++;
        func_087440(D_00116C18.row[D_00116C10].p, 0);
    } while (i < 6);
}
