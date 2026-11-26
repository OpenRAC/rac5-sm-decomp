/* LEVEL_17:0x0C3688 -- placement copy of LEVEL_16_0C4148.c: placement copy of LEVEL_01_0D4A50.c: sets up the scene object and clears a work buffer. */

struct Scene {
    char pad_00[0x20];
    int flags_20;
    char pad_24[0x39 - 0x24];
    unsigned char b_39;
};

extern struct Scene D_0026C200;
extern char D_001BC998[];
extern char *D_001A5F28;

extern void func_0A37E0(void *value);
extern int func_0A4590(int a);
extern void func_09C2F0(int a, void *buf, float f);
extern int func_096208(void *buf);
extern int func_096238(void *buf);
extern int func_096268(void *buf);
extern int func_096320(void *buf);
extern void func_098FC8(struct Scene *s, short a, short b, short c, short d, int e);
extern int func_094BB8(void);
extern void func_1100C0(int a, char *b, char *c);
extern void *memset(void *p, int c, unsigned int n);
extern void func_0C37B8(void);

void func_0C3688(void)
{
    float buf[4];
    short x;
    short y;
    short z;
    char *p;
    struct Scene *s;

    func_0A37E0(0);
    func_0A4590(6);
    func_09C2F0(0x1CC, buf, 0.0f);
    s = &D_0026C200;
    x = func_096208(buf);
    y = func_096238(buf);
    z = func_096268(buf);
    func_098FC8(s, x, y, z, (short)func_096320(buf), 0x40602020);
    s->flags_20 |= 0x840;
    s->b_39 = 0;
    p = ((char *(*)(int))func_094BB8)(0);
    D_001A5F28 = ((char *(*)(int))func_094BB8)(1);
    func_1100C0(0, D_001BC998, p);
    func_1100C0(1, D_001BC998, p + 0x10000);
    memset(D_001A5F28, 0, 0x20000);
    func_0C37B8();
}
