/* LEVEL_17:0x0B3820 -- placement copy of LEVEL_16_0B42E0.c: placement copy of LEVEL_01_0C4DD0.c: clears a table, queries a fixed asset into a record, registers its entries and publishes a handle. */
typedef struct {
    char pad0[0x20];
    unsigned int w20;
    char pad24[0x15];
    unsigned char b39;
} Rec;
extern char D_00268820[];
extern Rec D_002687C8;
extern char D_001BB308[];
extern char D_001BB320[];
extern char *D_001A217C;
extern void *memset(void *p, int c, int n);
extern int func_0A4590(int a);
extern void func_09C2F0(int a, char *buf, float f);
extern int func_096208(char *buf);
extern int func_096238(char *buf);
extern int func_096268(char *buf);
extern int func_096320(char *buf);
extern void func_098FC8(Rec *r, short a, short b, short c, short d, int e);
extern int func_094BB8(void);
extern void func_1100C0(int a, char *s, char *b);
extern void func_0B3970(void);

void func_0B3820(void)
{
    char buf[16];
    char *h;
    Rec *r;
    short a;
    short b;
    short c;

    memset(D_00268820, 0, 0x2000);
    func_0A4590(6);
    func_09C2F0(0x216, buf, 0.0f);
    r = &D_002687C8;
    a = func_096208(buf);
    b = func_096238(buf);
    c = func_096268(buf);
    func_098FC8(r, a, b, c, (short)func_096320(buf), 0x40602020);
    r->b39 = 0;
    r->w20 |= 0x840;
    h = ((char *(*)(int))func_094BB8)(0);
    func_1100C0(0, D_001BB308, h);
    h += 0x10000;
    func_1100C0(1, D_001BB320, h);
    D_001A217C = ((char *(*)(int))func_094BB8)(1);
    func_0B3970();
}
