/* LEVEL_04:0x0CA5E8 -- placement copy of LEVEL_16_0B42E0.c: placement copy of LEVEL_01_0C4DD0.c: clears a table, queries a fixed asset into a record, registers its entries and publishes a handle. */
typedef struct {
    char pad0[0x20];
    unsigned int w20;
    char pad24[0x15];
    unsigned char b39;
} Rec;
extern char D_00343DE0[];
extern Rec D_00343D88;
extern char D_0022CAC8[];
extern char D_0022CAE0[];
extern char *D_00219FC4;
extern void *memset(void *p, int c, int n);
extern int func_0BB828(int a);
extern void func_0B3958(int a, char *buf, float f);
extern int func_0AD890(char *buf);
extern int func_0AD8C0(char *buf);
extern int func_0AD8F0(char *buf);
extern int func_0AD9A8(char *buf);
extern void func_0B0630(Rec *r, short a, short b, short c, short d, int e);
extern char *func_0AB5F0(int);
extern void func_140258(int a, char *s, char *b);
extern void func_0CA738(void);

void func_0CA5E8(void)
{
    char buf[16];
    char *h;
    Rec *r;
    short a;
    short b;
    short c;

    memset(D_00343DE0, 0, 0x2000);
    func_0BB828(6);
    func_0B3958(0x216, buf, 0.0f);
    r = &D_00343D88;
    a = func_0AD890(buf);
    b = func_0AD8C0(buf);
    c = func_0AD8F0(buf);
    func_0B0630(r, a, b, c, (short)func_0AD9A8(buf), 0x40602020);
    r->b39 = 0;
    r->w20 |= 0x840;
    h = func_0AB5F0(0);
    func_140258(0, D_0022CAC8, h);
    h += 0x10000;
    func_140258(1, D_0022CAE0, h);
    D_00219FC4 = func_0AB5F0(1);
    func_0CA738();
}
