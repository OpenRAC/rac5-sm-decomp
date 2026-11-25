/* LEVEL_20:0x0AE678 -- placement copy of LEVEL_16_0C4148.c: placement copy of LEVEL_01_0D4A50.c: sets up the scene object and clears a work buffer. */

struct Scene {
    char pad_00[0x20];
    int flags_20;
    char pad_24[0x39 - 0x24];
    unsigned char b_39;
};

extern struct Scene D_0019E740;
extern char D_0012A598[];
extern char *D_00115008;

extern void func_08E978(void *value);
extern int func_08F6B0(int a);
extern void func_0874F0(int a, void *buf, float f);
extern int func_081408(void *buf);
extern int func_081438(void *buf);
extern int func_081468(void *buf);
extern int func_081520(void *buf);
extern void func_0841C8(struct Scene *s, short a, short b, short c, short d, int e);
extern int func_07FDB8(void);
extern void func_0E3930(int a, char *b, char *c);
extern void *memset(void *p, int c, unsigned int n);
extern void func_0AE7A8(void);

void func_0AE678(void)
{
    float buf[4];
    short x;
    short y;
    short z;
    char *p;
    struct Scene *s;

    func_08E978(0);
    func_08F6B0(6);
    func_0874F0(0x1CC, buf, 0.0f);
    s = &D_0019E740;
    x = func_081408(buf);
    y = func_081438(buf);
    z = func_081468(buf);
    func_0841C8(s, x, y, z, (short)func_081520(buf), 0x40602020);
    s->flags_20 |= 0x840;
    s->b_39 = 0;
    p = ((char *(*)(int))func_07FDB8)(0);
    D_00115008 = ((char *(*)(int))func_07FDB8)(1);
    func_0E3930(0, D_0012A598, p);
    func_0E3930(1, D_0012A598, p + 0x10000);
    memset(D_00115008, 0, 0x20000);
    func_0AE7A8();
}
