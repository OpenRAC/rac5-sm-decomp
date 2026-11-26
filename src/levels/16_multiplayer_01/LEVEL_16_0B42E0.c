/* LEVEL_16:0x0B42E0 -- placement copy of LEVEL_01_0C4DD0.c: clears a table, queries a fixed asset into a record, registers its entries and publishes a handle. */
typedef struct {
    char pad0[0x20];
    unsigned int w20;
    char pad24[0x15];
    unsigned char b39;
} Rec;
extern char D_00277520[];
extern Rec D_002774C8;
extern char D_001C7E88[];
extern char D_001C7EA0[];
extern char *D_001AEB7C;
extern void *memset(void *p, int c, int n);
extern int func_0A50B0(int a);
extern void func_09CDF8(int a, char *buf, float f);
extern int func_096D10(char *buf);
extern int func_096D40(char *buf);
extern int func_096D70(char *buf);
extern int func_096E28(char *buf);
extern void func_099AD0(Rec *r, short a, short b, short c, short d, int e);
extern int func_0956C0(void);
extern void func_110B48(int a, char *s, char *b);
extern void func_0B4430(void);

void func_0B42E0(void)
{
    char buf[16];
    char *h;
    Rec *r;
    short a;
    short b;
    short c;

    memset(D_00277520, 0, 0x2000);
    func_0A50B0(6);
    func_09CDF8(0x216, buf, 0.0f);
    r = &D_002774C8;
    a = func_096D10(buf);
    b = func_096D40(buf);
    c = func_096D70(buf);
    func_099AD0(r, a, b, c, (short)func_096E28(buf), 0x40602020);
    r->b39 = 0;
    r->w20 |= 0x840;
    h = ((char *(*)(int))func_0956C0)(0);
    func_110B48(0, D_001C7E88, h);
    h += 0x10000;
    func_110B48(1, D_001C7EA0, h);
    D_001AEB7C = ((char *(*)(int))func_0956C0)(1);
    func_0B4430();
}
