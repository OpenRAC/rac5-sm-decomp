/* LEVEL_10:0x0C6148 -- placement copy of LEVEL_16_0B42E0.c: placement copy of LEVEL_01_0C4DD0.c: clears a table, queries a fixed asset into a record, registers its entries and publishes a handle. */
typedef struct {
    char pad0[0x20];
    unsigned int w20;
    char pad24[0x15];
    unsigned char b39;
} Rec;
extern char D_003329E0[];
extern Rec D_00332988;
extern char D_0021C0C8[];
extern char D_0021C0E0[];
extern char *D_00209B04;
extern void *memset(void *p, int c, int n);
extern int func_0B71F8(int a);
extern void func_0AF820(int a, char *buf, float f);
extern int func_0A9798(char *buf);
extern int func_0A97C8(char *buf);
extern int func_0A97F8(char *buf);
extern int func_0A98B0(char *buf);
extern void func_0AC4F8(Rec *r, short a, short b, short c, short d, int e);
extern char *func_0A74F8(int);
extern void func_131C58(int a, char *s, char *b);
extern void func_0C6298(void);

void func_0C6148(void)
{
    char buf[16];
    char *h;
    Rec *r;
    short a;
    short b;
    short c;

    memset(D_003329E0, 0, 0x2000);
    func_0B71F8(6);
    func_0AF820(0x216, buf, 0.0f);
    r = &D_00332988;
    a = func_0A9798(buf);
    b = func_0A97C8(buf);
    c = func_0A97F8(buf);
    func_0AC4F8(r, a, b, c, (short)func_0A98B0(buf), 0x40602020);
    r->b39 = 0;
    r->w20 |= 0x840;
    h = func_0A74F8(0);
    func_131C58(0, D_0021C0C8, h);
    h += 0x10000;
    func_131C58(1, D_0021C0E0, h);
    D_00209B04 = func_0A74F8(1);
    func_0C6298();
}
