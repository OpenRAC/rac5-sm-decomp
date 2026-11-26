/* LEVEL_24:0x0BE698 -- placement copy of LEVEL_16_0B42E0.c: placement copy of LEVEL_01_0C4DD0.c: clears a table, queries a fixed asset into a record, registers its entries and publishes a handle. */
typedef struct {
    char pad0[0x20];
    unsigned int w20;
    char pad24[0x15];
    unsigned char b39;
} Rec;
extern char D_002F54A0[];
extern Rec D_002F5448;
extern char D_001E3EC8[];
extern char D_001E3EE0[];
extern char *D_001D1784;
extern void *memset(void *p, int c, int n);
extern int func_0AF8B0(int a);
extern void func_0A7F80(int a, char *buf, float f);
extern int func_0A1EF8(char *buf);
extern int func_0A1F28(char *buf);
extern int func_0A1F58(char *buf);
extern int func_0A2010(char *buf);
extern void func_0A4C58(Rec *r, short a, short b, short c, short d, int e);
extern char *func_09FC58(int);
extern void func_1298D8(int a, char *s, char *b);
extern void func_0BE7E8(void);

void func_0BE698(void)
{
    char buf[16];
    char *h;
    Rec *r;
    short a;
    short b;
    short c;

    memset(D_002F54A0, 0, 0x2000);
    func_0AF8B0(6);
    func_0A7F80(0x216, buf, 0.0f);
    r = &D_002F5448;
    a = func_0A1EF8(buf);
    b = func_0A1F28(buf);
    c = func_0A1F58(buf);
    func_0A4C58(r, a, b, c, (short)func_0A2010(buf), 0x40602020);
    r->b39 = 0;
    r->w20 |= 0x840;
    h = func_09FC58(0);
    func_1298D8(0, D_001E3EC8, h);
    h += 0x10000;
    func_1298D8(1, D_001E3EE0, h);
    D_001D1784 = func_09FC58(1);
    func_0BE7E8();
}
