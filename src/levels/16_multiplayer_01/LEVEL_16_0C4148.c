/* LEVEL_16:0x0C4148 -- placement copy of LEVEL_01_0D4A50.c: sets up the scene object and clears a work buffer. */

struct Scene {
    char pad_00[0x20];
    int flags_20;
    char pad_24[0x39 - 0x24];
    unsigned char b_39;
};

extern struct Scene D_0027AF00;
extern char D_001C9518[];
extern char *D_001B2928;

extern void func_0A4300(void *value);
extern int func_0A50B0(int a);
extern void func_09CDF8(int a, void *buf, float f);
extern int func_096D10(void *buf);
extern int func_096D40(void *buf);
extern int func_096D70(void *buf);
extern int func_096E28(void *buf);
extern void func_099AD0(struct Scene *s, short a, short b, short c, short d, int e);
extern int func_0956C0(void);
extern void func_110B48(int a, char *b, char *c);
extern void *memset(void *p, int c, unsigned int n);
extern void func_0C4278(void);

void func_0C4148(void)
{
    float buf[4];
    short x;
    short y;
    short z;
    char *p;
    struct Scene *s;

    func_0A4300(0);
    func_0A50B0(6);
    func_09CDF8(0x1CC, buf, 0.0f);
    s = &D_0027AF00;
    x = func_096D10(buf);
    y = func_096D40(buf);
    z = func_096D70(buf);
    func_099AD0(s, x, y, z, (short)func_096E28(buf), 0x40602020);
    s->flags_20 |= 0x840;
    s->b_39 = 0;
    p = ((char *(*)(int))func_0956C0)(0);
    D_001B2928 = ((char *(*)(int))func_0956C0)(1);
    func_110B48(0, D_001C9518, p);
    func_110B48(1, D_001C9518, p + 0x10000);
    memset(D_001B2928, 0, 0x20000);
    func_0C4278();
}
