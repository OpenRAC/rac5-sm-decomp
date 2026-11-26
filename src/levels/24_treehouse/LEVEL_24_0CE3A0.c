/* LEVEL_24:0x0CE3A0 -- placement copy of LEVEL_16_0C4148.c: placement copy of LEVEL_01_0D4A50.c: sets up the scene object and clears a work buffer. */

struct Scene {
    char pad_00[0x20];
    int flags_20;
    char pad_24[0x39 - 0x24];
    unsigned char b_39;
};

extern struct Scene D_002F8D40;
extern char D_001E53D8[];
extern char *D_001D56F8;

extern void func_0AEC90(void *value);
extern int func_0AF8B0(int a);
extern void func_0A7F80(int a, void *buf, float f);
extern int func_0A1EF8(void *buf);
extern int func_0A1F28(void *buf);
extern int func_0A1F58(void *buf);
extern int func_0A2010(void *buf);
extern void func_0A4C58(struct Scene *s, short a, short b, short c, short d, int e);
extern char *func_09FC58(int);
extern void func_1298D8(int a, char *b, char *c);
extern void *memset(void *p, int c, unsigned int n);
extern void func_0CE4D0(void);

void func_0CE3A0(void)
{
    float buf[4];
    short x;
    short y;
    short z;
    char *p;
    struct Scene *s;

    func_0AEC90(0);
    func_0AF8B0(6);
    func_0A7F80(0x1CC, buf, 0.0f);
    s = &D_002F8D40;
    x = func_0A1EF8(buf);
    y = func_0A1F28(buf);
    z = func_0A1F58(buf);
    func_0A4C58(s, x, y, z, (short)func_0A2010(buf), 0x40602020);
    s->flags_20 |= 0x840;
    s->b_39 = 0;
    p = func_09FC58(0);
    D_001D56F8 = func_09FC58(1);
    func_1298D8(0, D_001E53D8, p);
    func_1298D8(1, D_001E53D8, p + 0x10000);
    memset(D_001D56F8, 0, 0x20000);
    func_0CE4D0();
}
