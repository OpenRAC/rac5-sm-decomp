/* LEVEL_09:0x0D4040 -- placement copy of FRONTEND_013F20.c: resets the list widget state, places its frame rectangle at (x, y) and refreshes the six rows. */
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

extern Frame D_00314878;
extern char D_00314858[0x20];
extern Table D_001F0488;
extern int D_001F044C;
extern int D_001F0450;
extern int D_001F0458;
extern int D_001F0468;
extern int D_001F0478;
extern int D_001F0480;

extern void *memset(void *p, int v, unsigned int n);
extern void func_0D3FE0(int a);
extern void func_0AB9B8(float f, int a, int *r);
extern int func_0A5930(int *r);
extern int func_0A5960(int *r);
extern int func_0A5990(int *r);
extern int func_0A5A48(int *r);
extern void func_0A8690(void *p, short a, short b, short c, short d, unsigned int col);
extern int func_0AB908(int a, int b);

void func_0D4040(int x, int y)
{
    int r[4];
    unsigned int i;

    i = 0;
    func_0D3FE0(0);
    D_001F0458 = 1;
    memset(D_00314858, 0, 0x20);
    D_001F0468 = 0;
    D_001F0478 = 0;
    D_00314878.w14 = 0;
    D_001F0480 = 0;
    func_0AB9B8(0.0f, D_001F0488.w4, r);
    D_001F044C = x - func_0A5930(r);
    D_001F0450 = y - func_0A5960(r);
    r[0] += D_001F044C;
    r[2] += D_001F044C;
    r[1] += D_001F0450;
    r[3] += D_001F0450;
    func_0A8690(&D_00314878, func_0A5930(r), func_0A5960(r), func_0A5990(r), func_0A5A48(r), 0x40602020);
    D_00314878.w14 = 0;
    do {
        i++;
        func_0AB908(D_001F0488.row[D_001F0480].p, 0);
    } while (i < 6);
}
