/* LEVEL_20:0x09E810 -- placement copy of LEVEL_16_0B42E0.c: placement copy of LEVEL_01_0C4DD0.c: clears a table, queries a fixed asset into a record, registers its entries and publishes a handle. */
typedef struct {
    char pad0[0x20];
    unsigned int w20;
    char pad24[0x15];
    unsigned char b39;
} Rec;
extern char D_0019AD60[];
extern Rec D_0019AD08;
extern char D_00128F08[];
extern char D_00128F20[];
extern char *D_0011125C;
extern void *memset(void *p, int c, int n);
extern int func_08F6B0(int a);
extern void func_0874F0(int a, char *buf, float f);
extern int func_081408(char *buf);
extern int func_081438(char *buf);
extern int func_081468(char *buf);
extern int func_081520(char *buf);
extern void func_0841C8(Rec *r, short a, short b, short c, short d, int e);
extern int func_07FDB8(void);
extern void func_0E3930(int a, char *s, char *b);
extern void func_09E960(void);

void func_09E810(void)
{
    char buf[16];
    char *h;
    Rec *r;
    short a;
    short b;
    short c;

    memset(D_0019AD60, 0, 0x2000);
    func_08F6B0(6);
    func_0874F0(0x216, buf, 0.0f);
    r = &D_0019AD08;
    a = func_081408(buf);
    b = func_081438(buf);
    c = func_081468(buf);
    func_0841C8(r, a, b, c, (short)func_081520(buf), 0x40602020);
    r->b39 = 0;
    r->w20 |= 0x840;
    h = ((char *(*)(int))func_07FDB8)(0);
    func_0E3930(0, D_00128F08, h);
    h += 0x10000;
    func_0E3930(1, D_00128F20, h);
    D_0011125C = ((char *(*)(int))func_07FDB8)(1);
    func_09E960();
}
