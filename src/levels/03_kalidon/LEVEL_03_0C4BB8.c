/* LEVEL_03:0x0C4BB8 -- placement copy of LEVEL_16_0B42E0.c: placement copy of LEVEL_01_0C4DD0.c: clears a table, queries a fixed asset into a record, registers its entries and publishes a handle. */
typedef struct {
    char pad0[0x20];
    unsigned int w20;
    char pad24[0x15];
    unsigned char b39;
} Rec;
extern char D_00344460[];
extern Rec D_00344408;
extern char D_0022C048[];
extern char D_0022C060[];
extern char *D_00219184;
extern void *memset(void *p, int c, int n);
extern int func_0B5E08(int a);
extern void func_0AE488(int a, char *buf, float f);
extern int func_0A8400(char *buf);
extern int func_0A8430(char *buf);
extern int func_0A8460(char *buf);
extern int func_0A8518(char *buf);
extern void func_0AB160(Rec *r, short a, short b, short c, short d, int e);
extern char *func_0A6160(int);
extern void func_1321A0(int a, char *s, char *b);
extern void func_0C4D08(void);

void func_0C4BB8(void)
{
    char buf[16];
    char *h;
    Rec *r;
    short a;
    short b;
    short c;

    memset(D_00344460, 0, 0x2000);
    func_0B5E08(6);
    func_0AE488(0x216, buf, 0.0f);
    r = &D_00344408;
    a = func_0A8400(buf);
    b = func_0A8430(buf);
    c = func_0A8460(buf);
    func_0AB160(r, a, b, c, (short)func_0A8518(buf), 0x40602020);
    r->b39 = 0;
    r->w20 |= 0x840;
    h = func_0A6160(0);
    func_1321A0(0, D_0022C048, h);
    h += 0x10000;
    func_1321A0(1, D_0022C060, h);
    D_00219184 = func_0A6160(1);
    func_0C4D08();
}
