/* LEVEL_01:0x0D4A50 -- placement copy of LEVEL_16_0C4148.c: placement copy of LEVEL_01_0D4A50.c: sets up the scene object and clears a work buffer. */

struct Scene {
    char pad_00[0x20];
    int flags_20;
    char pad_24[0x39 - 0x24];
    unsigned char b_39;
};

extern struct Scene D_0032CE80;
extern char D_00214658[];
extern char *D_00204A78;

extern void func_0B5400(void *value);
extern int func_0B6020(int a);
extern void func_0AE708(int a, void *buf, float f);
extern int func_0A8680(void *buf);
extern int func_0A86B0(void *buf);
extern int func_0A86E0(void *buf);
extern int func_0A8798(void *buf);
extern void func_0AB3E0(struct Scene *s, short a, short b, short c, short d, int e);
extern char *func_0A63E0(int);
extern void func_133DD8(int a, char *b, char *c);
extern void *memset(void *p, int c, unsigned int n);
extern void func_0D4B80(void);

void func_0D4A50(void)
{
    float buf[4];
    short x;
    short y;
    short z;
    char *p;
    struct Scene *s;

    func_0B5400(0);
    func_0B6020(6);
    func_0AE708(0x1CC, buf, 0.0f);
    s = &D_0032CE80;
    x = func_0A8680(buf);
    y = func_0A86B0(buf);
    z = func_0A86E0(buf);
    func_0AB3E0(s, x, y, z, (short)func_0A8798(buf), 0x40602020);
    s->flags_20 |= 0x840;
    s->b_39 = 0;
    p = func_0A63E0(0);
    D_00204A78 = func_0A63E0(1);
    func_133DD8(0, D_00214658, p);
    func_133DD8(1, D_00214658, p + 0x10000);
    memset(D_00204A78, 0, 0x20000);
    func_0D4B80();
}
