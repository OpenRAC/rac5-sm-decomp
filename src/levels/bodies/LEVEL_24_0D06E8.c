/* LEVEL_24:0x0D06E8 -- placement copy of FRONTEND_013F20.c: resets the list widget state, places its frame rectangle at (x, y) and refreshes the six rows. */
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

extern Frame D_002F8FB8;
extern char D_002F8F98[0x20];
extern Table D_001D7308;
extern int D_001D72CC;
extern int D_001D72D0;
extern int D_001D72D8;
extern int D_001D72E8;
extern int D_001D72F8;
extern int D_001D7300;

extern void *memset(void *p, int v, unsigned int n);
extern void func_0D0688(int a);
extern void func_0A7F80(float f, int a, int *r);
extern int func_0A1EF8(int *r);
extern int func_0A1F28(int *r);
extern int func_0A1F58(int *r);
extern int func_0A2010(int *r);
extern void func_0A4C58(void *p, short a, short b, short c, short d, unsigned int col);
extern int func_0A7ED0(int a, int b);

void func_0D06E8(int x, int y)
{
    int r[4];
    unsigned int i;

    i = 0;
    func_0D0688(0);
    D_001D72D8 = 1;
    memset(D_002F8F98, 0, 0x20);
    D_001D72E8 = 0;
    D_001D72F8 = 0;
    D_002F8FB8.w14 = 0;
    D_001D7300 = 0;
    func_0A7F80(0.0f, D_001D7308.w4, r);
    D_001D72CC = x - func_0A1EF8(r);
    D_001D72D0 = y - func_0A1F28(r);
    r[0] += D_001D72CC;
    r[2] += D_001D72CC;
    r[1] += D_001D72D0;
    r[3] += D_001D72D0;
    func_0A4C58(&D_002F8FB8, func_0A1EF8(r), func_0A1F28(r), func_0A1F58(r), func_0A2010(r), 0x40602020);
    D_002F8FB8.w14 = 0;
    do {
        i++;
        func_0A7ED0(D_001D7308.row[D_001D7300].p, 0);
    } while (i < 6);
}
