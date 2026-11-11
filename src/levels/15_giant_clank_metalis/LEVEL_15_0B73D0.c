/* LEVEL_15:0x0B73D0 -- placement copy of FRONTEND_013F20.c: resets the list widget state, places its frame rectangle at (x, y) and refreshes the six rows. */
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

extern Frame D_00244938;
extern char D_00244918[0x20];
extern Table D_0015B308;
extern int D_0015B2CC;
extern int D_0015B2D0;
extern int D_0015B2D8;
extern int D_0015B2E8;
extern int D_0015B2F8;
extern int D_0015B300;

extern void *memset(void *p, int v, unsigned int n);
extern void func_0B7370(int a);
extern void func_08EFD0(float f, int a, int *r);
extern int func_088F48(int *r);
extern int func_088F78(int *r);
extern int func_088FA8(int *r);
extern int func_089060(int *r);
extern void func_08BCA8(void *p, short a, short b, short c, short d, unsigned int col);
extern int func_08EF20(int a, int b);

void func_0B73D0(int x, int y)
{
    int r[4];
    unsigned int i;

    i = 0;
    func_0B7370(0);
    D_0015B2D8 = 1;
    memset(D_00244918, 0, 0x20);
    D_0015B2E8 = 0;
    D_0015B2F8 = 0;
    D_00244938.w14 = 0;
    D_0015B300 = 0;
    func_08EFD0(0.0f, D_0015B308.w4, r);
    D_0015B2CC = x - func_088F48(r);
    D_0015B2D0 = y - func_088F78(r);
    r[0] += D_0015B2CC;
    r[2] += D_0015B2CC;
    r[1] += D_0015B2D0;
    r[3] += D_0015B2D0;
    func_08BCA8(&D_00244938, func_088F48(r), func_088F78(r), func_088FA8(r), func_089060(r), 0x40602020);
    D_00244938.w14 = 0;
    do {
        i++;
        func_08EF20(D_0015B308.row[D_0015B300].p, 0);
    } while (i < 6);
}
