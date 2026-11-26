/* LEVEL_19:0x0B3BB8 -- placement copy of LEVEL_16_0B42E0.c: placement copy of LEVEL_01_0C4DD0.c: clears a table, queries a fixed asset into a record, registers its entries and publishes a handle. */
typedef struct {
    char pad0[0x20];
    unsigned int w20;
    char pad24[0x15];
    unsigned char b39;
} Rec;
extern char D_002776A0[];
extern Rec D_00277648;
extern char D_001C9088[];
extern char D_001C90A0[];
extern char *D_001AFCFC;
extern void *memset(void *p, int c, int n);
extern int func_0A4928(int a);
extern void func_09C688(int a, char *buf, float f);
extern int func_0965A0(char *buf);
extern int func_0965D0(char *buf);
extern int func_096600(char *buf);
extern int func_0966B8(char *buf);
extern void func_099360(Rec *r, short a, short b, short c, short d, int e);
extern int func_094F50(void);
extern void func_1111E8(int a, char *s, char *b);
extern void func_0B3D08(void);

void func_0B3BB8(void)
{
    char buf[16];
    char *h;
    Rec *r;
    short a;
    short b;
    short c;

    memset(D_002776A0, 0, 0x2000);
    func_0A4928(6);
    func_09C688(0x216, buf, 0.0f);
    r = &D_00277648;
    a = func_0965A0(buf);
    b = func_0965D0(buf);
    c = func_096600(buf);
    func_099360(r, a, b, c, (short)func_0966B8(buf), 0x40602020);
    r->b39 = 0;
    r->w20 |= 0x840;
    h = ((char *(*)(int))func_094F50)(0);
    func_1111E8(0, D_001C9088, h);
    h += 0x10000;
    func_1111E8(1, D_001C90A0, h);
    D_001AFCFC = ((char *(*)(int))func_094F50)(1);
    func_0B3D08();
}
