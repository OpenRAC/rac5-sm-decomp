/* LEVEL_05:0x0D5338 -- placement copy of FRONTEND_013F20.c: resets the list widget state, places its frame rectangle at (x, y) and refreshes the six rows. */
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

extern Frame D_00318FB8;
extern char D_00318F98[0x20];
extern Table D_001F5A08;
extern int D_001F59CC;
extern int D_001F59D0;
extern int D_001F59D8;
extern int D_001F59E8;
extern int D_001F59F8;
extern int D_001F5A00;

extern void *memset(void *p, int v, unsigned int n);
extern void func_0D52D8(int a);
extern void func_0ACCC8(float f, int a, int *r);
extern int func_0A6C40(int *r);
extern int func_0A6C70(int *r);
extern int func_0A6CA0(int *r);
extern int func_0A6D58(int *r);
extern void func_0A99A0(void *p, short a, short b, short c, short d, unsigned int col);
extern int func_0ACC18(int a, int b);

void func_0D5338(int x, int y)
{
    int r[4];
    unsigned int i;

    i = 0;
    func_0D52D8(0);
    D_001F59D8 = 1;
    memset(D_00318F98, 0, 0x20);
    D_001F59E8 = 0;
    D_001F59F8 = 0;
    D_00318FB8.w14 = 0;
    D_001F5A00 = 0;
    func_0ACCC8(0.0f, D_001F5A08.w4, r);
    D_001F59CC = x - func_0A6C40(r);
    D_001F59D0 = y - func_0A6C70(r);
    r[0] += D_001F59CC;
    r[2] += D_001F59CC;
    r[1] += D_001F59D0;
    r[3] += D_001F59D0;
    func_0A99A0(&D_00318FB8, func_0A6C40(r), func_0A6C70(r), func_0A6CA0(r), func_0A6D58(r), 0x40602020);
    D_00318FB8.w14 = 0;
    do {
        i++;
        func_0ACC18(D_001F5A08.row[D_001F5A00].p, 0);
    } while (i < 6);
}
