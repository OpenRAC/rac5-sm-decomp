/* LEVEL_23:0x0BBB70 -- placement copy of LEVEL_16_0B42E0.c: placement copy of LEVEL_01_0C4DD0.c: clears a table, queries a fixed asset into a record, registers its entries and publishes a handle. */
typedef struct {
    char pad0[0x20];
    unsigned int w20;
    char pad24[0x15];
    unsigned char b39;
} Rec;
extern char D_002FAA20[];
extern Rec D_002FA9C8;
extern char D_001E62C8[];
extern char D_001E62E0[];
extern char *D_001D3F04;
extern void *memset(void *p, int c, int n);
extern int func_0ACDE8(int a);
extern void func_0A5478(int a, char *buf, float f);
extern int func_09F3F0(char *buf);
extern int func_09F420(char *buf);
extern int func_09F450(char *buf);
extern int func_09F508(char *buf);
extern void func_0A2150(Rec *r, short a, short b, short c, short d, int e);
extern char *func_09D150(int);
extern void func_125550(int a, char *s, char *b);
extern void func_0BBCC0(void);

void func_0BBB70(void)
{
    char buf[16];
    char *h;
    Rec *r;
    short a;
    short b;
    short c;

    memset(D_002FAA20, 0, 0x2000);
    func_0ACDE8(6);
    func_0A5478(0x216, buf, 0.0f);
    r = &D_002FA9C8;
    a = func_09F3F0(buf);
    b = func_09F420(buf);
    c = func_09F450(buf);
    func_0A2150(r, a, b, c, (short)func_09F508(buf), 0x40602020);
    r->b39 = 0;
    r->w20 |= 0x840;
    h = func_09D150(0);
    func_125550(0, D_001E62C8, h);
    h += 0x10000;
    func_125550(1, D_001E62E0, h);
    D_001D3F04 = func_09D150(1);
    func_0BBCC0();
}
