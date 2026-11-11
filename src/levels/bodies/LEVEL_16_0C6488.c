/* LEVEL_16:0x0C6488 -- placement copy of FRONTEND_013F20.c: resets the list widget state, places its frame rectangle at (x, y) and refreshes the six rows. */
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

extern Frame D_0027B178;
extern char D_0027B158[0x20];
extern Table D_001B4538;
extern int D_001B44FC;
extern int D_001B4500;
extern int D_001B4508;
extern int D_001B4518;
extern int D_001B4528;
extern int D_001B4530;

extern void *memset(void *p, int v, unsigned int n);
extern void func_0C6428(int a);
extern void func_09CDF8(float f, int a, int *r);
extern int func_096D10(int *r);
extern int func_096D40(int *r);
extern int func_096D70(int *r);
extern int func_096E28(int *r);
extern void func_099AD0(void *p, short a, short b, short c, short d, unsigned int col);
extern int func_09CD48(int a, int b);

void func_0C6488(int x, int y)
{
    int r[4];
    unsigned int i;

    i = 0;
    func_0C6428(0);
    D_001B4508 = 1;
    memset(D_0027B158, 0, 0x20);
    D_001B4518 = 0;
    D_001B4528 = 0;
    D_0027B178.w14 = 0;
    D_001B4530 = 0;
    func_09CDF8(0.0f, D_001B4538.w4, r);
    D_001B44FC = x - func_096D10(r);
    D_001B4500 = y - func_096D40(r);
    r[0] += D_001B44FC;
    r[2] += D_001B44FC;
    r[1] += D_001B4500;
    r[3] += D_001B4500;
    func_099AD0(&D_0027B178, func_096D10(r), func_096D40(r), func_096D70(r), func_096E28(r), 0x40602020);
    D_0027B178.w14 = 0;
    do {
        i++;
        func_09CD48(D_001B4538.row[D_001B4530].p, 0);
    } while (i < 6);
}
