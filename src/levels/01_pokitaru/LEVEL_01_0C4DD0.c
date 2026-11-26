/* LEVEL_01:0x0C4DD0 -- placement copy of LEVEL_16_0B42E0.c: placement copy of LEVEL_01_0C4DD0.c: clears a table, queries a fixed asset into a record, registers its entries and publishes a handle. */
typedef struct {
    char pad0[0x20];
    unsigned int w20;
    char pad24[0x15];
    unsigned char b39;
} Rec;
extern char D_003295E0[];
extern Rec D_00329588;
extern char D_00213148[];
extern char D_00213160[];
extern char *D_00200B04;
extern void *memset(void *p, int c, int n);
extern int func_0B6020(int a);
extern void func_0AE708(int a, char *buf, float f);
extern int func_0A8680(char *buf);
extern int func_0A86B0(char *buf);
extern int func_0A86E0(char *buf);
extern int func_0A8798(char *buf);
extern void func_0AB3E0(Rec *r, short a, short b, short c, short d, int e);
extern char *func_0A63E0(int);
extern void func_133DD8(int a, char *s, char *b);
extern void func_0C4F20(void);

void func_0C4DD0(void)
{
    char buf[16];
    char *h;
    Rec *r;
    short a;
    short b;
    short c;

    memset(D_003295E0, 0, 0x2000);
    func_0B6020(6);
    func_0AE708(0x216, buf, 0.0f);
    r = &D_00329588;
    a = func_0A8680(buf);
    b = func_0A86B0(buf);
    c = func_0A86E0(buf);
    func_0AB3E0(r, a, b, c, (short)func_0A8798(buf), 0x40602020);
    r->b39 = 0;
    r->w20 |= 0x840;
    h = func_0A63E0(0);
    func_133DD8(0, D_00213148, h);
    h += 0x10000;
    func_133DD8(1, D_00213160, h);
    D_00200B04 = func_0A63E0(1);
    func_0C4F20();
}
