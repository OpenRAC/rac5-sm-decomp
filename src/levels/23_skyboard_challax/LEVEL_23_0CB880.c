/* LEVEL_23:0x0CB880 -- placement copy of LEVEL_16_0C4148.c: placement copy of LEVEL_01_0D4A50.c: sets up the scene object and clears a work buffer. */

struct Scene {
    char pad_00[0x20];
    int flags_20;
    char pad_24[0x39 - 0x24];
    unsigned char b_39;
};

extern struct Scene D_002FE2C0;
extern char D_001E77D8[];
extern char *D_001D7E78;

extern void func_0AC1C8(void *value);
extern int func_0ACDE8(int a);
extern void func_0A5478(int a, void *buf, float f);
extern int func_09F3F0(void *buf);
extern int func_09F420(void *buf);
extern int func_09F450(void *buf);
extern int func_09F508(void *buf);
extern void func_0A2150(struct Scene *s, short a, short b, short c, short d, int e);
extern char *func_09D150(int);
extern void func_125550(int a, char *b, char *c);
extern void *memset(void *p, int c, unsigned int n);
extern void func_0CB9B0(void);

void func_0CB880(void)
{
    float buf[4];
    short x;
    short y;
    short z;
    char *p;
    struct Scene *s;

    func_0AC1C8(0);
    func_0ACDE8(6);
    func_0A5478(0x1CC, buf, 0.0f);
    s = &D_002FE2C0;
    x = func_09F3F0(buf);
    y = func_09F420(buf);
    z = func_09F450(buf);
    func_0A2150(s, x, y, z, (short)func_09F508(buf), 0x40602020);
    s->flags_20 |= 0x840;
    s->b_39 = 0;
    p = func_09D150(0);
    D_001D7E78 = func_09D150(1);
    func_125550(0, D_001E77D8, p);
    func_125550(1, D_001E77D8, p + 0x10000);
    memset(D_001D7E78, 0, 0x20000);
    func_0CB9B0();
}
