/* LEVEL_18:0x0C3120 -- placement copy of LEVEL_16_0C4148.c: placement copy of LEVEL_01_0D4A50.c: sets up the scene object and clears a work buffer. */

struct Scene {
    char pad_00[0x20];
    int flags_20;
    char pad_24[0x39 - 0x24];
    unsigned char b_39;
};

extern struct Scene D_0027B280;
extern char D_001CAA98[];
extern char *D_001B3DA8;

extern void func_0A32F8(void *value);
extern int func_0A40A8(int a);
extern void func_09BE08(int a, void *buf, float f);
extern int func_095D20(void *buf);
extern int func_095D50(void *buf);
extern int func_095D80(void *buf);
extern int func_095E38(void *buf);
extern void func_098AE0(struct Scene *s, short a, short b, short c, short d, int e);
extern int func_0946D0(void);
extern void func_10F7F8(int a, char *b, char *c);
extern void *memset(void *p, int c, unsigned int n);
extern void func_0C3250(void);

void func_0C3120(void)
{
    float buf[4];
    short x;
    short y;
    short z;
    char *p;
    struct Scene *s;

    func_0A32F8(0);
    func_0A40A8(6);
    func_09BE08(0x1CC, buf, 0.0f);
    s = &D_0027B280;
    x = func_095D20(buf);
    y = func_095D50(buf);
    z = func_095D80(buf);
    func_098AE0(s, x, y, z, (short)func_095E38(buf), 0x40602020);
    s->flags_20 |= 0x840;
    s->b_39 = 0;
    p = ((char *(*)(int))func_0946D0)(0);
    D_001B3DA8 = ((char *(*)(int))func_0946D0)(1);
    func_10F7F8(0, D_001CAA98, p);
    func_10F7F8(1, D_001CAA98, p + 0x10000);
    memset(D_001B3DA8, 0, 0x20000);
    func_0C3250();
}
