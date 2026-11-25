/* LEVEL_07:0x0C6E30 -- placement copy of LEVEL_16_0B42E0.c: placement copy of LEVEL_01_0C4DD0.c: clears a table, queries a fixed asset into a record, registers its entries and publishes a handle. */
typedef struct {
    char pad0[0x20];
    unsigned int w20;
    char pad24[0x15];
    unsigned char b39;
} Rec;
extern char D_0033EEE0[];
extern Rec D_0033EE88;
extern char D_00227E48[];
extern char D_00227E60[];
extern char *D_00214E04;
extern void *memset(void *p, int c, int n);
extern int func_0B8080(int a);
extern void func_0B0708(int a, char *buf, float f);
extern int func_0AA680(char *buf);
extern int func_0AA6B0(char *buf);
extern int func_0AA6E0(char *buf);
extern int func_0AA798(char *buf);
extern void func_0AD3E0(Rec *r, short a, short b, short c, short d, int e);
extern char *func_0A83E0(int);
extern void func_136DD8(int a, char *s, char *b);
extern void func_0C6F80(void);

void func_0C6E30(void)
{
    char buf[16];
    char *h;
    Rec *r;
    short a;
    short b;
    short c;

    memset(D_0033EEE0, 0, 0x2000);
    func_0B8080(6);
    func_0B0708(0x216, buf, 0.0f);
    r = &D_0033EE88;
    a = func_0AA680(buf);
    b = func_0AA6B0(buf);
    c = func_0AA6E0(buf);
    func_0AD3E0(r, a, b, c, (short)func_0AA798(buf), 0x40602020);
    r->b39 = 0;
    r->w20 |= 0x840;
    h = func_0A83E0(0);
    func_136DD8(0, D_00227E48, h);
    h += 0x10000;
    func_136DD8(1, D_00227E60, h);
    D_00214E04 = func_0A83E0(1);
    func_0C6F80();
}
