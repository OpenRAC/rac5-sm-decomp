/* LEVEL_02:0x0DB3E0 -- placement copy of LEVEL_16_0C4148.c: placement copy of LEVEL_01_0D4A50.c: sets up the scene object and clears a work buffer. */

struct Scene {
    char pad_00[0x20];
    int flags_20;
    char pad_24[0x39 - 0x24];
    unsigned char b_39;
};

extern struct Scene D_00344380;
extern char D_002295D8[];
extern char *D_00219A38;

extern void func_0BBD10(void *value);
extern int func_0BC930(int a);
extern void func_0B5018(int a, void *buf, float f);
extern int func_0AEF90(void *buf);
extern int func_0AEFC0(void *buf);
extern int func_0AEFF0(void *buf);
extern int func_0AF0A8(void *buf);
extern void func_0B1CF0(struct Scene *s, short a, short b, short c, short d, int e);
extern char *func_0ACCF0(int);
extern void func_13A188(int a, char *b, char *c);
extern void *memset(void *p, int c, unsigned int n);
extern void func_0DB510(void);

void func_0DB3E0(void)
{
    float buf[4];
    short x;
    short y;
    short z;
    char *p;
    struct Scene *s;

    func_0BBD10(0);
    func_0BC930(6);
    func_0B5018(0x1CC, buf, 0.0f);
    s = &D_00344380;
    x = func_0AEF90(buf);
    y = func_0AEFC0(buf);
    z = func_0AEFF0(buf);
    func_0B1CF0(s, x, y, z, (short)func_0AF0A8(buf), 0x40602020);
    s->flags_20 |= 0x840;
    s->b_39 = 0;
    p = func_0ACCF0(0);
    D_00219A38 = func_0ACCF0(1);
    func_13A188(0, D_002295D8, p);
    func_13A188(1, D_002295D8, p + 0x10000);
    memset(D_00219A38, 0, 0x20000);
    func_0DB510();
}
