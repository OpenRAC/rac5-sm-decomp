/* LEVEL_08:0x0CFCF8 -- placement copy of LEVEL_16_0B42E0.c: placement copy of LEVEL_01_0C4DD0.c: clears a table, queries a fixed asset into a record, registers its entries and publishes a handle. */
typedef struct {
    char pad0[0x20];
    unsigned int w20;
    char pad24[0x15];
    unsigned char b39;
} Rec;
extern char D_00378860[];
extern Rec D_00378808;
extern char D_0025CDC8[];
extern char D_0025CDE0[];
extern char *D_002499C4;
extern void *memset(void *p, int c, int n);
extern int func_0C0F10(int a);
extern void func_0B9040(int a, char *buf, float f);
extern int func_0B2F78(char *buf);
extern int func_0B2FA8(char *buf);
extern int func_0B2FD8(char *buf);
extern int func_0B3090(char *buf);
extern void func_0B5D18(Rec *r, short a, short b, short c, short d, int e);
extern char *func_0B0CD8(int);
extern void func_145310(int a, char *s, char *b);
extern void func_0CFE48(void);

void func_0CFCF8(void)
{
    char buf[16];
    char *h;
    Rec *r;
    short a;
    short b;
    short c;

    memset(D_00378860, 0, 0x2000);
    func_0C0F10(6);
    func_0B9040(0x216, buf, 0.0f);
    r = &D_00378808;
    a = func_0B2F78(buf);
    b = func_0B2FA8(buf);
    c = func_0B2FD8(buf);
    func_0B5D18(r, a, b, c, (short)func_0B3090(buf), 0x40602020);
    r->b39 = 0;
    r->w20 |= 0x840;
    h = func_0B0CD8(0);
    func_145310(0, D_0025CDC8, h);
    h += 0x10000;
    func_145310(1, D_0025CDE0, h);
    D_002499C4 = func_0B0CD8(1);
    func_0CFE48();
}
