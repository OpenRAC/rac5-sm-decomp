/* LEVEL_06:0x0D1690 -- placement copy of FRONTEND_013F20.c: resets the list widget state, places its frame rectangle at (x, y) and refreshes the six rows. */
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

extern Frame D_00319E78;
extern char D_00319E58[0x20];
extern Table D_001F5588;
extern int D_001F554C;
extern int D_001F5550;
extern int D_001F5558;
extern int D_001F5568;
extern int D_001F5578;
extern int D_001F5580;

extern void *memset(void *p, int v, unsigned int n);
extern void func_0D1630(int a);
extern void func_0A8ED8(float f, int a, int *r);
extern int func_0A2E50(int *r);
extern int func_0A2E80(int *r);
extern int func_0A2EB0(int *r);
extern int func_0A2F68(int *r);
extern void func_0A5BB0(void *p, short a, short b, short c, short d, unsigned int col);
extern int func_0A8E28(int a, int b);

void func_0D1690(int x, int y)
{
    int r[4];
    unsigned int i;

    i = 0;
    func_0D1630(0);
    D_001F5558 = 1;
    memset(D_00319E58, 0, 0x20);
    D_001F5568 = 0;
    D_001F5578 = 0;
    D_00319E78.w14 = 0;
    D_001F5580 = 0;
    func_0A8ED8(0.0f, D_001F5588.w4, r);
    D_001F554C = x - func_0A2E50(r);
    D_001F5550 = y - func_0A2E80(r);
    r[0] += D_001F554C;
    r[2] += D_001F554C;
    r[1] += D_001F5550;
    r[3] += D_001F5550;
    func_0A5BB0(&D_00319E78, func_0A2E50(r), func_0A2E80(r), func_0A2EB0(r), func_0A2F68(r), 0x40602020);
    D_00319E78.w14 = 0;
    do {
        i++;
        func_0A8E28(D_001F5588.row[D_001F5580].p, 0);
    } while (i < 6);
}
