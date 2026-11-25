/* LEVEL_03:0x0D4838 -- placement copy of LEVEL_16_0C4148.c: placement copy of LEVEL_01_0D4A50.c: sets up the scene object and clears a work buffer. */

struct Scene {
    char pad_00[0x20];
    int flags_20;
    char pad_24[0x39 - 0x24];
    unsigned char b_39;
};

extern struct Scene D_00347D00;
extern char D_0022D558[];
extern char *D_0021D0F8;

extern void func_0B51E8(void *value);
extern int func_0B5E08(int a);
extern void func_0AE488(int a, void *buf, float f);
extern int func_0A8400(void *buf);
extern int func_0A8430(void *buf);
extern int func_0A8460(void *buf);
extern int func_0A8518(void *buf);
extern void func_0AB160(struct Scene *s, short a, short b, short c, short d, int e);
extern char *func_0A6160(int);
extern void func_1321A0(int a, char *b, char *c);
extern void *memset(void *p, int c, unsigned int n);
extern void func_0D4968(void);

void func_0D4838(void)
{
    float buf[4];
    short x;
    short y;
    short z;
    char *p;
    struct Scene *s;

    func_0B51E8(0);
    func_0B5E08(6);
    func_0AE488(0x1CC, buf, 0.0f);
    s = &D_00347D00;
    x = func_0A8400(buf);
    y = func_0A8430(buf);
    z = func_0A8460(buf);
    func_0AB160(s, x, y, z, (short)func_0A8518(buf), 0x40602020);
    s->flags_20 |= 0x840;
    s->b_39 = 0;
    p = func_0A6160(0);
    D_0021D0F8 = func_0A6160(1);
    func_1321A0(0, D_0022D558, p);
    func_1321A0(1, D_0022D558, p + 0x10000);
    memset(D_0021D0F8, 0, 0x20000);
    func_0D4968();
}
