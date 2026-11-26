/* LEVEL_05:0x0C3378 -- placement copy of LEVEL_16_0B42E0.c: placement copy of LEVEL_01_0C4DD0.c: clears a table, queries a fixed asset into a record, registers its entries and publishes a handle. */
typedef struct {
    char pad0[0x20];
    unsigned int w20;
    char pad24[0x15];
    unsigned char b39;
} Rec;
extern char D_003154A0[];
extern Rec D_00315448;
extern char D_00202048[];
extern char D_00202060[];
extern char *D_001EFE84;
extern void *memset(void *p, int c, int n);
extern int func_0B45C8(int a);
extern void func_0ACCC8(int a, char *buf, float f);
extern int func_0A6C40(char *buf);
extern int func_0A6C70(char *buf);
extern int func_0A6CA0(char *buf);
extern int func_0A6D58(char *buf);
extern void func_0A99A0(Rec *r, short a, short b, short c, short d, int e);
extern char *func_0A49A0(int);
extern void func_12F750(int a, char *s, char *b);
extern void func_0C34C8(void);

void func_0C3378(void)
{
    char buf[16];
    char *h;
    Rec *r;
    short a;
    short b;
    short c;

    memset(D_003154A0, 0, 0x2000);
    func_0B45C8(6);
    func_0ACCC8(0x216, buf, 0.0f);
    r = &D_00315448;
    a = func_0A6C40(buf);
    b = func_0A6C70(buf);
    c = func_0A6CA0(buf);
    func_0A99A0(r, a, b, c, (short)func_0A6D58(buf), 0x40602020);
    r->b39 = 0;
    r->w20 |= 0x840;
    h = func_0A49A0(0);
    func_12F750(0, D_00202048, h);
    h += 0x10000;
    func_12F750(1, D_00202060, h);
    D_001EFE84 = func_0A49A0(1);
    func_0C34C8();
}
