/* LEVEL_18:0x0C5460 -- placement copy of FRONTEND_013F20.c: resets the list widget state, places its frame rectangle at (x, y) and refreshes the six rows. */
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

extern Frame D_0027B4F8;
extern char D_0027B4D8[0x20];
extern Table D_001B59B8;
extern int D_001B597C;
extern int D_001B5980;
extern int D_001B5988;
extern int D_001B5998;
extern int D_001B59A8;
extern int D_001B59B0;

extern void *memset(void *p, int v, unsigned int n);
extern void func_0C5400(int a);
extern void func_09BE08(float f, int a, int *r);
extern int func_095D20(int *r);
extern int func_095D50(int *r);
extern int func_095D80(int *r);
extern int func_095E38(int *r);
extern void func_098AE0(void *p, short a, short b, short c, short d, unsigned int col);
extern int func_09BD58(int a, int b);

void func_0C5460(int x, int y)
{
    int r[4];
    unsigned int i;

    i = 0;
    func_0C5400(0);
    D_001B5988 = 1;
    memset(D_0027B4D8, 0, 0x20);
    D_001B5998 = 0;
    D_001B59A8 = 0;
    D_0027B4F8.w14 = 0;
    D_001B59B0 = 0;
    func_09BE08(0.0f, D_001B59B8.w4, r);
    D_001B597C = x - func_095D20(r);
    D_001B5980 = y - func_095D50(r);
    r[0] += D_001B597C;
    r[2] += D_001B597C;
    r[1] += D_001B5980;
    r[3] += D_001B5980;
    func_098AE0(&D_0027B4F8, func_095D20(r), func_095D50(r), func_095D80(r), func_095E38(r), 0x40602020);
    D_0027B4F8.w14 = 0;
    do {
        i++;
        func_09BD58(D_001B59B8.row[D_001B59B0].p, 0);
    } while (i < 6);
}
