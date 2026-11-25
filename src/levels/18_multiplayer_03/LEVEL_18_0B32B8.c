/* LEVEL_18:0x0B32B8 -- placement copy of LEVEL_16_0B42E0.c: placement copy of LEVEL_01_0C4DD0.c: clears a table, queries a fixed asset into a record, registers its entries and publishes a handle. */
typedef struct {
    char pad0[0x20];
    unsigned int w20;
    char pad24[0x15];
    unsigned char b39;
} Rec;
extern char D_002778A0[];
extern Rec D_00277848;
extern char D_001C9408[];
extern char D_001C9420[];
extern char *D_001AFFFC;
extern void *memset(void *p, int c, int n);
extern int func_0A40A8(int a);
extern void func_09BE08(int a, char *buf, float f);
extern int func_095D20(char *buf);
extern int func_095D50(char *buf);
extern int func_095D80(char *buf);
extern int func_095E38(char *buf);
extern void func_098AE0(Rec *r, short a, short b, short c, short d, int e);
extern int func_0946D0(void);
extern void func_10F7F8(int a, char *s, char *b);
extern void func_0B3408(void);

void func_0B32B8(void)
{
    char buf[16];
    char *h;
    Rec *r;
    short a;
    short b;
    short c;

    memset(D_002778A0, 0, 0x2000);
    func_0A40A8(6);
    func_09BE08(0x216, buf, 0.0f);
    r = &D_00277848;
    a = func_095D20(buf);
    b = func_095D50(buf);
    c = func_095D80(buf);
    func_098AE0(r, a, b, c, (short)func_095E38(buf), 0x40602020);
    r->b39 = 0;
    r->w20 |= 0x840;
    h = ((char *(*)(int))func_0946D0)(0);
    func_10F7F8(0, D_001C9408, h);
    h += 0x10000;
    func_10F7F8(1, D_001C9420, h);
    D_001AFFFC = ((char *(*)(int))func_0946D0)(1);
    func_0B3408();
}
