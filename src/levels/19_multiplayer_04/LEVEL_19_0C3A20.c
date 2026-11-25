/* LEVEL_19:0x0C3A20 -- placement copy of LEVEL_16_0C4148.c: placement copy of LEVEL_01_0D4A50.c: sets up the scene object and clears a work buffer. */

struct Scene {
    char pad_00[0x20];
    int flags_20;
    char pad_24[0x39 - 0x24];
    unsigned char b_39;
};

extern struct Scene D_0027B080;
extern char D_001CA718[];
extern char *D_001B3AA8;

extern void func_0A3B78(void *value);
extern int func_0A4928(int a);
extern void func_09C688(int a, void *buf, float f);
extern int func_0965A0(void *buf);
extern int func_0965D0(void *buf);
extern int func_096600(void *buf);
extern int func_0966B8(void *buf);
extern void func_099360(struct Scene *s, short a, short b, short c, short d, int e);
extern int func_094F50(void);
extern void func_1111E8(int a, char *b, char *c);
extern void *memset(void *p, int c, unsigned int n);
extern void func_0C3B50(void);

void func_0C3A20(void)
{
    float buf[4];
    short x;
    short y;
    short z;
    char *p;
    struct Scene *s;

    func_0A3B78(0);
    func_0A4928(6);
    func_09C688(0x1CC, buf, 0.0f);
    s = &D_0027B080;
    x = func_0965A0(buf);
    y = func_0965D0(buf);
    z = func_096600(buf);
    func_099360(s, x, y, z, (short)func_0966B8(buf), 0x40602020);
    s->flags_20 |= 0x840;
    s->b_39 = 0;
    p = ((char *(*)(int))func_094F50)(0);
    D_001B3AA8 = ((char *(*)(int))func_094F50)(1);
    func_1111E8(0, D_001CA718, p);
    func_1111E8(1, D_001CA718, p + 0x10000);
    memset(D_001B3AA8, 0, 0x20000);
    func_0C3B50();
}
