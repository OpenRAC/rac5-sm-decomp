/* LEVEL_06:0x0BF6D0 -- placement copy of LEVEL_16_0B42E0.c: placement copy of LEVEL_01_0C4DD0.c: clears a table, queries a fixed asset into a record, registers its entries and publishes a handle. */
typedef struct {
    char pad0[0x20];
    unsigned int w20;
    char pad24[0x15];
    unsigned char b39;
} Rec;
extern char D_00316360[];
extern Rec D_00316308;
extern char D_00201FC8[];
extern char D_00201FE0[];
extern char *D_001EFA04;
extern void *memset(void *p, int c, int n);
extern int func_0B0848(int a);
extern void func_0A8ED8(int a, char *buf, float f);
extern int func_0A2E50(char *buf);
extern int func_0A2E80(char *buf);
extern int func_0A2EB0(char *buf);
extern int func_0A2F68(char *buf);
extern void func_0A5BB0(Rec *r, short a, short b, short c, short d, int e);
extern char *func_0A0BB0(int);
extern void func_12A4A8(int a, char *s, char *b);
extern void func_0BF820(void);

void func_0BF6D0(void)
{
    char buf[16];
    char *h;
    Rec *r;
    short a;
    short b;
    short c;

    memset(D_00316360, 0, 0x2000);
    func_0B0848(6);
    func_0A8ED8(0x216, buf, 0.0f);
    r = &D_00316308;
    a = func_0A2E50(buf);
    b = func_0A2E80(buf);
    c = func_0A2EB0(buf);
    func_0A5BB0(r, a, b, c, (short)func_0A2F68(buf), 0x40602020);
    r->b39 = 0;
    r->w20 |= 0x840;
    h = func_0A0BB0(0);
    func_12A4A8(0, D_00201FC8, h);
    h += 0x10000;
    func_12A4A8(1, D_00201FE0, h);
    D_001EFA04 = func_0A0BB0(1);
    func_0BF820();
}
