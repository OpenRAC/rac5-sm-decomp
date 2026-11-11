/* LEVEL_03:0x0D6B78 -- placement copy of FRONTEND_013F20.c: resets the list widget state, places its frame rectangle at (x, y) and refreshes the six rows. */
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

extern Frame D_00347F78;
extern char D_00347F58[0x20];
extern Table D_0021ED08;
extern int D_0021ECCC;
extern int D_0021ECD0;
extern int D_0021ECD8;
extern int D_0021ECE8;
extern int D_0021ECF8;
extern int D_0021ED00;

extern void *memset(void *p, int v, unsigned int n);
extern void func_0D6B18(int a);
extern void func_0AE488(float f, int a, int *r);
extern int func_0A8400(int *r);
extern int func_0A8430(int *r);
extern int func_0A8460(int *r);
extern int func_0A8518(int *r);
extern void func_0AB160(void *p, short a, short b, short c, short d, unsigned int col);
extern int func_0AE3D8(int a, int b);

void func_0D6B78(int x, int y)
{
    int r[4];
    unsigned int i;

    i = 0;
    func_0D6B18(0);
    D_0021ECD8 = 1;
    memset(D_00347F58, 0, 0x20);
    D_0021ECE8 = 0;
    D_0021ECF8 = 0;
    D_00347F78.w14 = 0;
    D_0021ED00 = 0;
    func_0AE488(0.0f, D_0021ED08.w4, r);
    D_0021ECCC = x - func_0A8400(r);
    D_0021ECD0 = y - func_0A8430(r);
    r[0] += D_0021ECCC;
    r[2] += D_0021ECCC;
    r[1] += D_0021ECD0;
    r[3] += D_0021ECD0;
    func_0AB160(&D_00347F78, func_0A8400(r), func_0A8430(r), func_0A8460(r), func_0A8518(r), 0x40602020);
    D_00347F78.w14 = 0;
    do {
        i++;
        func_0AE3D8(D_0021ED08.row[D_0021ED00].p, 0);
    } while (i < 6);
}
