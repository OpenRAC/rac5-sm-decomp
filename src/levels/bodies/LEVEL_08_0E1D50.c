/* LEVEL_08:0x0E1D50 -- placement copy of FRONTEND_013F20.c: resets the list widget state, places its frame rectangle at (x, y) and refreshes the six rows. */
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

extern Frame D_0037C378;
extern char D_0037C358[0x20];
extern Table D_0024F548;
extern int D_0024F50C;
extern int D_0024F510;
extern int D_0024F518;
extern int D_0024F528;
extern int D_0024F538;
extern int D_0024F540;

extern void *memset(void *p, int v, unsigned int n);
extern void func_0E1CF0(int a);
extern void func_0B9040(float f, int a, int *r);
extern int func_0B2F78(int *r);
extern int func_0B2FA8(int *r);
extern int func_0B2FD8(int *r);
extern int func_0B3090(int *r);
extern void func_0B5D18(void *p, short a, short b, short c, short d, unsigned int col);
extern int func_0B8F90(int a, int b);

void func_0E1D50(int x, int y)
{
    int r[4];
    unsigned int i;

    i = 0;
    func_0E1CF0(0);
    D_0024F518 = 1;
    memset(D_0037C358, 0, 0x20);
    D_0024F528 = 0;
    D_0024F538 = 0;
    D_0037C378.w14 = 0;
    D_0024F540 = 0;
    func_0B9040(0.0f, D_0024F548.w4, r);
    D_0024F50C = x - func_0B2F78(r);
    D_0024F510 = y - func_0B2FA8(r);
    r[0] += D_0024F50C;
    r[2] += D_0024F50C;
    r[1] += D_0024F510;
    r[3] += D_0024F510;
    func_0B5D18(&D_0037C378, func_0B2F78(r), func_0B2FA8(r), func_0B2FD8(r), func_0B3090(r), 0x40602020);
    D_0037C378.w14 = 0;
    do {
        i++;
        func_0B8F90(D_0024F548.row[D_0024F540].p, 0);
    } while (i < 6);
}
