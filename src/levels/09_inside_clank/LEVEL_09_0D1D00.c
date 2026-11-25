/* LEVEL_09:0x0D1D00 -- placement copy of LEVEL_16_0C4148.c: placement copy of LEVEL_01_0D4A50.c: sets up the scene object and clears a work buffer. */

struct Scene {
    char pad_00[0x20];
    int flags_20;
    char pad_24[0x39 - 0x24];
    unsigned char b_39;
};

extern struct Scene D_00314600;
extern char D_001FE258[];
extern char *D_001EE878;

extern void func_0B26B0(void *value);
extern int func_0B32D0(int a);
extern void func_0AB9B8(int a, void *buf, float f);
extern int func_0A5930(void *buf);
extern int func_0A5960(void *buf);
extern int func_0A5990(void *buf);
extern int func_0A5A48(void *buf);
extern void func_0A8690(struct Scene *s, short a, short b, short c, short d, int e);
extern char *func_0A3690(int);
extern void func_12CD70(int a, char *b, char *c);
extern void *memset(void *p, int c, unsigned int n);
extern void func_0D1E30(void);

void func_0D1D00(void)
{
    float buf[4];
    short x;
    short y;
    short z;
    char *p;
    struct Scene *s;

    func_0B26B0(0);
    func_0B32D0(6);
    func_0AB9B8(0x1CC, buf, 0.0f);
    s = &D_00314600;
    x = func_0A5930(buf);
    y = func_0A5960(buf);
    z = func_0A5990(buf);
    func_0A8690(s, x, y, z, (short)func_0A5A48(buf), 0x40602020);
    s->flags_20 |= 0x840;
    s->b_39 = 0;
    p = func_0A3690(0);
    D_001EE878 = func_0A3690(1);
    func_12CD70(0, D_001FE258, p);
    func_12CD70(1, D_001FE258, p + 0x10000);
    memset(D_001EE878, 0, 0x20000);
    func_0D1E30();
}
