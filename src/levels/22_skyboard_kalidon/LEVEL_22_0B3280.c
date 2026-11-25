/* LEVEL_22:0x0B3280 -- placement copy of LEVEL_16_0B42E0.c: placement copy of LEVEL_01_0C4DD0.c: clears a table, queries a fixed asset into a record, registers its entries and publishes a handle. */
typedef struct {
    char pad0[0x20];
    unsigned int w20;
    char pad24[0x15];
    unsigned char b39;
} Rec;
extern char D_0027F1A0[];
extern Rec D_0027F148;
extern char D_001705C8[];
extern char D_001705E0[];
extern char *D_0015FE84;
extern void *memset(void *p, int c, int n);
extern int func_0A4570(int a);
extern void func_09CD18(int a, char *buf, float f);
extern int func_096C90(char *buf);
extern int func_096CC0(char *buf);
extern int func_096CF0(char *buf);
extern int func_096DA8(char *buf);
extern void func_0999F0(Rec *r, short a, short b, short c, short d, int e);
extern char *func_0949F0(int);
extern void func_10B2A8(int a, char *s, char *b);
extern void func_0B33D0(void);

void func_0B3280(void)
{
    char buf[16];
    char *h;
    Rec *r;
    short a;
    short b;
    short c;

    memset(D_0027F1A0, 0, 0x2000);
    func_0A4570(6);
    func_09CD18(0x216, buf, 0.0f);
    r = &D_0027F148;
    a = func_096C90(buf);
    b = func_096CC0(buf);
    c = func_096CF0(buf);
    func_0999F0(r, a, b, c, (short)func_096DA8(buf), 0x40602020);
    r->b39 = 0;
    r->w20 |= 0x840;
    h = func_0949F0(0);
    func_10B2A8(0, D_001705C8, h);
    h += 0x10000;
    func_10B2A8(1, D_001705E0, h);
    D_0015FE84 = func_0949F0(1);
    func_0B33D0();
}
