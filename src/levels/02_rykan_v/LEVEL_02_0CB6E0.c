/* LEVEL_02:0x0CB6E0 -- placement copy of LEVEL_16_0B42E0.c: placement copy of LEVEL_01_0C4DD0.c: clears a table, queries a fixed asset into a record, registers its entries and publishes a handle. */
typedef struct {
    char pad0[0x20];
    unsigned int w20;
    char pad24[0x15];
    unsigned char b39;
} Rec;
extern char D_00340AE0[];
extern Rec D_00340A88;
extern char D_002280C8[];
extern char D_002280E0[];
extern char *D_00215AC4;
extern void *memset(void *p, int c, int n);
extern int func_0BC930(int a);
extern void func_0B5018(int a, char *buf, float f);
extern int func_0AEF90(char *buf);
extern int func_0AEFC0(char *buf);
extern int func_0AEFF0(char *buf);
extern int func_0AF0A8(char *buf);
extern void func_0B1CF0(Rec *r, short a, short b, short c, short d, int e);
extern char *func_0ACCF0(int);
extern void func_13A188(int a, char *s, char *b);
extern void func_0CB830(void);

void func_0CB6E0(void)
{
    char buf[16];
    char *h;
    Rec *r;
    short a;
    short b;
    short c;

    memset(D_00340AE0, 0, 0x2000);
    func_0BC930(6);
    func_0B5018(0x216, buf, 0.0f);
    r = &D_00340A88;
    a = func_0AEF90(buf);
    b = func_0AEFC0(buf);
    c = func_0AEFF0(buf);
    func_0B1CF0(r, a, b, c, (short)func_0AF0A8(buf), 0x40602020);
    r->b39 = 0;
    r->w20 |= 0x840;
    h = func_0ACCF0(0);
    func_13A188(0, D_002280C8, h);
    h += 0x10000;
    func_13A188(1, D_002280E0, h);
    D_00215AC4 = func_0ACCF0(1);
    func_0CB830();
}
