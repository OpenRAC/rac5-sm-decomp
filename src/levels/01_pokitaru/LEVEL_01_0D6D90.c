/* LEVEL_01:0x0D6D90 -- placement copy of FRONTEND_013F20.c: resets the list widget state, places its frame rectangle at (x, y) and refreshes the six rows. */
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

extern Frame D_0032D0F8;
extern char D_0032D0D8[0x20];
extern Table D_00206688;
extern int D_0020664C;
extern int D_00206650;
extern int D_00206658;
extern int D_00206668;
extern int D_00206678;
extern int D_00206680;

extern void *memset(void *p, int v, unsigned int n);
extern void func_0D6D30(int a);
extern void func_0AE708(float f, int a, int *r);
extern int func_0A8680(int *r);
extern int func_0A86B0(int *r);
extern int func_0A86E0(int *r);
extern int func_0A8798(int *r);
extern void func_0AB3E0(void *p, short a, short b, short c, short d, unsigned int col);
extern int func_0AE658(int a, int b);

void func_0D6D90(int x, int y)
{
    int r[4];
    unsigned int i;

    i = 0;
    func_0D6D30(0);
    D_00206658 = 1;
    memset(D_0032D0D8, 0, 0x20);
    D_00206668 = 0;
    D_00206678 = 0;
    D_0032D0F8.w14 = 0;
    D_00206680 = 0;
    func_0AE708(0.0f, D_00206688.w4, r);
    D_0020664C = x - func_0A8680(r);
    D_00206650 = y - func_0A86B0(r);
    r[0] += D_0020664C;
    r[2] += D_0020664C;
    r[1] += D_00206650;
    r[3] += D_00206650;
    func_0AB3E0(&D_0032D0F8, func_0A8680(r), func_0A86B0(r), func_0A86E0(r), func_0A8798(r), 0x40602020);
    D_0032D0F8.w14 = 0;
    do {
        i++;
        func_0AE658(D_00206688.row[D_00206680].p, 0);
    } while (i < 6);
}
