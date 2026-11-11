/* LEVEL_23:0x0CDBC0 -- placement copy of FRONTEND_013F20.c: resets the list widget state, places its frame rectangle at (x, y) and refreshes the six rows. */
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

extern Frame D_002FE538;
extern char D_002FE518[0x20];
extern Table D_001D9A88;
extern int D_001D9A4C;
extern int D_001D9A50;
extern int D_001D9A58;
extern int D_001D9A68;
extern int D_001D9A78;
extern int D_001D9A80;

extern void *memset(void *p, int v, unsigned int n);
extern void func_0CDB60(int a);
extern void func_0A5478(float f, int a, int *r);
extern int func_09F3F0(int *r);
extern int func_09F420(int *r);
extern int func_09F450(int *r);
extern int func_09F508(int *r);
extern void func_0A2150(void *p, short a, short b, short c, short d, unsigned int col);
extern int func_0A53C8(int a, int b);

void func_0CDBC0(int x, int y)
{
    int r[4];
    unsigned int i;

    i = 0;
    func_0CDB60(0);
    D_001D9A58 = 1;
    memset(D_002FE518, 0, 0x20);
    D_001D9A68 = 0;
    D_001D9A78 = 0;
    D_002FE538.w14 = 0;
    D_001D9A80 = 0;
    func_0A5478(0.0f, D_001D9A88.w4, r);
    D_001D9A4C = x - func_09F3F0(r);
    D_001D9A50 = y - func_09F420(r);
    r[0] += D_001D9A4C;
    r[2] += D_001D9A4C;
    r[1] += D_001D9A50;
    r[3] += D_001D9A50;
    func_0A2150(&D_002FE538, func_09F3F0(r), func_09F420(r), func_09F450(r), func_09F508(r), 0x40602020);
    D_002FE538.w14 = 0;
    do {
        i++;
        func_0A53C8(D_001D9A88.row[D_001D9A80].p, 0);
    } while (i < 6);
}
