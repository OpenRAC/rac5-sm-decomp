/* LEVEL_17:0x0C59C8 -- placement copy of FRONTEND_013F20.c: resets the list widget state, places its frame rectangle at (x, y) and refreshes the six rows. */
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

extern Frame D_0026C478;
extern char D_0026C458[0x20];
extern Table D_001A7B38;
extern int D_001A7AFC;
extern int D_001A7B00;
extern int D_001A7B08;
extern int D_001A7B18;
extern int D_001A7B28;
extern int D_001A7B30;

extern void *memset(void *p, int v, unsigned int n);
extern void func_0C5968(int a);
extern void func_09C2F0(float f, int a, int *r);
extern int func_096208(int *r);
extern int func_096238(int *r);
extern int func_096268(int *r);
extern int func_096320(int *r);
extern void func_098FC8(void *p, short a, short b, short c, short d, unsigned int col);
extern int func_09C240(int a, int b);

void func_0C59C8(int x, int y)
{
    int r[4];
    unsigned int i;

    i = 0;
    func_0C5968(0);
    D_001A7B08 = 1;
    memset(D_0026C458, 0, 0x20);
    D_001A7B18 = 0;
    D_001A7B28 = 0;
    D_0026C478.w14 = 0;
    D_001A7B30 = 0;
    func_09C2F0(0.0f, D_001A7B38.w4, r);
    D_001A7AFC = x - func_096208(r);
    D_001A7B00 = y - func_096238(r);
    r[0] += D_001A7AFC;
    r[2] += D_001A7AFC;
    r[1] += D_001A7B00;
    r[3] += D_001A7B00;
    func_098FC8(&D_0026C478, func_096208(r), func_096238(r), func_096268(r), func_096320(r), 0x40602020);
    D_0026C478.w14 = 0;
    do {
        i++;
        func_09C240(D_001A7B38.row[D_001A7B30].p, 0);
    } while (i < 6);
}
