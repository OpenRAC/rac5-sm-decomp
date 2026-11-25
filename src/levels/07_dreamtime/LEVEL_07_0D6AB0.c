/* LEVEL_07:0x0D6AB0 -- placement copy of LEVEL_16_0C4148.c: placement copy of LEVEL_01_0D4A50.c: sets up the scene object and clears a work buffer. */

struct Scene {
    char pad_00[0x20];
    int flags_20;
    char pad_24[0x39 - 0x24];
    unsigned char b_39;
};

extern struct Scene D_00342780;
extern char D_00229358[];
extern char *D_00218D78;

extern void func_0B7460(void *value);
extern int func_0B8080(int a);
extern void func_0B0708(int a, void *buf, float f);
extern int func_0AA680(void *buf);
extern int func_0AA6B0(void *buf);
extern int func_0AA6E0(void *buf);
extern int func_0AA798(void *buf);
extern void func_0AD3E0(struct Scene *s, short a, short b, short c, short d, int e);
extern char *func_0A83E0(int);
extern void func_136DD8(int a, char *b, char *c);
extern void *memset(void *p, int c, unsigned int n);
extern void func_0D6BE0(void);

void func_0D6AB0(void)
{
    float buf[4];
    short x;
    short y;
    short z;
    char *p;
    struct Scene *s;

    func_0B7460(0);
    func_0B8080(6);
    func_0B0708(0x1CC, buf, 0.0f);
    s = &D_00342780;
    x = func_0AA680(buf);
    y = func_0AA6B0(buf);
    z = func_0AA6E0(buf);
    func_0AD3E0(s, x, y, z, (short)func_0AA798(buf), 0x40602020);
    s->flags_20 |= 0x840;
    s->b_39 = 0;
    p = func_0A83E0(0);
    D_00218D78 = func_0A83E0(1);
    func_136DD8(0, D_00229358, p);
    func_136DD8(1, D_00229358, p + 0x10000);
    memset(D_00218D78, 0, 0x20000);
    func_0D6BE0();
}
