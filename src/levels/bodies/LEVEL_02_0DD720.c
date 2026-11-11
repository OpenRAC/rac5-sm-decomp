/* LEVEL_02:0x0DD720 -- placement copy of FRONTEND_013F20.c: resets the list widget state, places its frame rectangle at (x, y) and refreshes the six rows. */
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

extern Frame D_003445F8;
extern char D_003445D8[0x20];
extern Table D_0021B648;
extern int D_0021B60C;
extern int D_0021B610;
extern int D_0021B618;
extern int D_0021B628;
extern int D_0021B638;
extern int D_0021B640;

extern void *memset(void *p, int v, unsigned int n);
extern void func_0DD6C0(int a);
extern void func_0B5018(float f, int a, int *r);
extern int func_0AEF90(int *r);
extern int func_0AEFC0(int *r);
extern int func_0AEFF0(int *r);
extern int func_0AF0A8(int *r);
extern void func_0B1CF0(void *p, short a, short b, short c, short d, unsigned int col);
extern int func_0B4F68(int a, int b);

void func_0DD720(int x, int y)
{
    int r[4];
    unsigned int i;

    i = 0;
    func_0DD6C0(0);
    D_0021B618 = 1;
    memset(D_003445D8, 0, 0x20);
    D_0021B628 = 0;
    D_0021B638 = 0;
    D_003445F8.w14 = 0;
    D_0021B640 = 0;
    func_0B5018(0.0f, D_0021B648.w4, r);
    D_0021B60C = x - func_0AEF90(r);
    D_0021B610 = y - func_0AEFC0(r);
    r[0] += D_0021B60C;
    r[2] += D_0021B60C;
    r[1] += D_0021B610;
    r[3] += D_0021B610;
    func_0B1CF0(&D_003445F8, func_0AEF90(r), func_0AEFC0(r), func_0AEFF0(r), func_0AF0A8(r), 0x40602020);
    D_003445F8.w14 = 0;
    do {
        i++;
        func_0B4F68(D_0021B648.row[D_0021B640].p, 0);
    } while (i < 6);
}
