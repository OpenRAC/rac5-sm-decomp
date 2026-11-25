/* LEVEL_15:0x0A5418 -- placement copy of LEVEL_16_0B42E0.c: placement copy of LEVEL_01_0C4DD0.c: clears a table, queries a fixed asset into a record, registers its entries and publishes a handle. */
typedef struct {
    char pad0[0x20];
    unsigned int w20;
    char pad24[0x15];
    unsigned char b39;
} Rec;
extern char D_00240E20[];
extern Rec D_00240DC8;
extern char D_001678C8[];
extern char D_001678E0[];
extern char *D_00155784;
extern void *memset(void *p, int c, int n);
extern int func_096530(int a);
extern void func_08EFD0(int a, char *buf, float f);
extern int func_088F48(char *buf);
extern int func_088F78(char *buf);
extern int func_088FA8(char *buf);
extern int func_089060(char *buf);
extern void func_08BCA8(Rec *r, short a, short b, short c, short d, int e);
extern char *func_086CA8(int);
extern void func_0F2CA0(int a, char *s, char *b);
extern void func_0A5568(void);

void func_0A5418(void)
{
    char buf[16];
    char *h;
    Rec *r;
    short a;
    short b;
    short c;

    memset(D_00240E20, 0, 0x2000);
    func_096530(6);
    func_08EFD0(0x216, buf, 0.0f);
    r = &D_00240DC8;
    a = func_088F48(buf);
    b = func_088F78(buf);
    c = func_088FA8(buf);
    func_08BCA8(r, a, b, c, (short)func_089060(buf), 0x40602020);
    r->b39 = 0;
    r->w20 |= 0x840;
    h = func_086CA8(0);
    func_0F2CA0(0, D_001678C8, h);
    h += 0x10000;
    func_0F2CA0(1, D_001678E0, h);
    D_00155784 = func_086CA8(1);
    func_0A5568();
}
