/* LEVEL_10:0x0D81D0 -- placement copy of FRONTEND_013F20.c: resets the list widget state, places its frame rectangle at (x, y) and refreshes the six rows. */
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

extern Frame D_003364F8;
extern char D_003364D8[0x20];
extern Table D_0020F688;
extern int D_0020F64C;
extern int D_0020F650;
extern int D_0020F658;
extern int D_0020F668;
extern int D_0020F678;
extern int D_0020F680;

extern void *memset(void *p, int v, unsigned int n);
extern void func_0D8170(int a);
extern void func_0AF820(float f, int a, int *r);
extern int func_0A9798(int *r);
extern int func_0A97C8(int *r);
extern int func_0A97F8(int *r);
extern int func_0A98B0(int *r);
extern void func_0AC4F8(void *p, short a, short b, short c, short d, unsigned int col);
extern int func_0AF770(int a, int b);

void func_0D81D0(int x, int y)
{
    int r[4];
    unsigned int i;

    i = 0;
    func_0D8170(0);
    D_0020F658 = 1;
    memset(D_003364D8, 0, 0x20);
    D_0020F668 = 0;
    D_0020F678 = 0;
    D_003364F8.w14 = 0;
    D_0020F680 = 0;
    func_0AF820(0.0f, D_0020F688.w4, r);
    D_0020F64C = x - func_0A9798(r);
    D_0020F650 = y - func_0A97C8(r);
    r[0] += D_0020F64C;
    r[2] += D_0020F64C;
    r[1] += D_0020F650;
    r[3] += D_0020F650;
    func_0AC4F8(&D_003364F8, func_0A9798(r), func_0A97C8(r), func_0A97F8(r), func_0A98B0(r), 0x40602020);
    D_003364F8.w14 = 0;
    do {
        i++;
        func_0AF770(D_0020F688.row[D_0020F680].p, 0);
    } while (i < 6);
}
