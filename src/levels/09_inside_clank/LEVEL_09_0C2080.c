/* LEVEL_09:0x0C2080 -- placement copy of LEVEL_16_0B42E0.c: placement copy of LEVEL_01_0C4DD0.c: clears a table, queries a fixed asset into a record, registers its entries and publishes a handle. */
typedef struct {
    char pad0[0x20];
    unsigned int w20;
    char pad24[0x15];
    unsigned char b39;
} Rec;
extern char D_00310D60[];
extern Rec D_00310D08;
extern char D_001FCD48[];
extern char D_001FCD60[];
extern char *D_001EA904;
extern void *memset(void *p, int c, int n);
extern int func_0B32D0(int a);
extern void func_0AB9B8(int a, char *buf, float f);
extern int func_0A5930(char *buf);
extern int func_0A5960(char *buf);
extern int func_0A5990(char *buf);
extern int func_0A5A48(char *buf);
extern void func_0A8690(Rec *r, short a, short b, short c, short d, int e);
extern char *func_0A3690(int);
extern void func_12CD70(int a, char *s, char *b);
extern void func_0C21D0(void);

void func_0C2080(void)
{
    char buf[16];
    char *h;
    Rec *r;
    short a;
    short b;
    short c;

    memset(D_00310D60, 0, 0x2000);
    func_0B32D0(6);
    func_0AB9B8(0x216, buf, 0.0f);
    r = &D_00310D08;
    a = func_0A5930(buf);
    b = func_0A5960(buf);
    c = func_0A5990(buf);
    func_0A8690(r, a, b, c, (short)func_0A5A48(buf), 0x40602020);
    r->b39 = 0;
    r->w20 |= 0x840;
    h = func_0A3690(0);
    func_12CD70(0, D_001FCD48, h);
    h += 0x10000;
    func_12CD70(1, D_001FCD60, h);
    D_001EA904 = func_0A3690(1);
    func_0C21D0();
}
