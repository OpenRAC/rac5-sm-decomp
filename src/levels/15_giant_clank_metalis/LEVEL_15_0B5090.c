/* LEVEL_15:0x0B5090 -- placement copy of LEVEL_16_0C4148.c: placement copy of LEVEL_01_0D4A50.c: sets up the scene object and clears a work buffer. */

struct Scene {
    char pad_00[0x20];
    int flags_20;
    char pad_24[0x39 - 0x24];
    unsigned char b_39;
};

extern struct Scene D_002446C0;
extern char D_00168DD8[];
extern char *D_001596F8;

extern void func_0959A0(void *value);
extern int func_096530(int a);
extern void func_08EFD0(int a, void *buf, float f);
extern int func_088F48(void *buf);
extern int func_088F78(void *buf);
extern int func_088FA8(void *buf);
extern int func_089060(void *buf);
extern void func_08BCA8(struct Scene *s, short a, short b, short c, short d, int e);
extern char *func_086CA8(int);
extern void func_0F2CA0(int a, char *b, char *c);
extern void *memset(void *p, int c, unsigned int n);
extern void func_0B51C0(void);

void func_0B5090(void)
{
    float buf[4];
    short x;
    short y;
    short z;
    char *p;
    struct Scene *s;

    func_0959A0(0);
    func_096530(6);
    func_08EFD0(0x1CC, buf, 0.0f);
    s = &D_002446C0;
    x = func_088F48(buf);
    y = func_088F78(buf);
    z = func_088FA8(buf);
    func_08BCA8(s, x, y, z, (short)func_089060(buf), 0x40602020);
    s->flags_20 |= 0x840;
    s->b_39 = 0;
    p = func_086CA8(0);
    D_001596F8 = func_086CA8(1);
    func_0F2CA0(0, D_00168DD8, p);
    func_0F2CA0(1, D_00168DD8, p + 0x10000);
    memset(D_001596F8, 0, 0x20000);
    func_0B51C0();
}
