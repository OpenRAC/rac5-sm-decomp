/* LEVEL_08:0x0DFA08 -- placement copy of LEVEL_16_0C4148.c: placement copy of LEVEL_01_0D4A50.c: sets up the scene object and clears a work buffer. */

struct Scene {
    char pad_00[0x20];
    int flags_20;
    char pad_24[0x39 - 0x24];
    unsigned char b_39;
};

extern struct Scene D_0037C100;
extern char D_0025E2D8[];
extern char *D_0024D938;

extern void func_0C01D8(void *value);
extern int func_0C0F10(int a);
extern void func_0B9040(int a, void *buf, float f);
extern int func_0B2F78(void *buf);
extern int func_0B2FA8(void *buf);
extern int func_0B2FD8(void *buf);
extern int func_0B3090(void *buf);
extern void func_0B5D18(struct Scene *s, short a, short b, short c, short d, int e);
extern char *func_0B0CD8(int);
extern void func_145310(int a, char *b, char *c);
extern void *memset(void *p, int c, unsigned int n);
extern void func_0DFB38(void);

void func_0DFA08(void)
{
    float buf[4];
    short x;
    short y;
    short z;
    char *p;
    struct Scene *s;

    func_0C01D8(0);
    func_0C0F10(6);
    func_0B9040(0x1CC, buf, 0.0f);
    s = &D_0037C100;
    x = func_0B2F78(buf);
    y = func_0B2FA8(buf);
    z = func_0B2FD8(buf);
    func_0B5D18(s, x, y, z, (short)func_0B3090(buf), 0x40602020);
    s->flags_20 |= 0x840;
    s->b_39 = 0;
    p = func_0B0CD8(0);
    D_0024D938 = func_0B0CD8(1);
    func_145310(0, D_0025E2D8, p);
    func_145310(1, D_0025E2D8, p + 0x10000);
    memset(D_0024D938, 0, 0x20000);
    func_0DFB38();
}
