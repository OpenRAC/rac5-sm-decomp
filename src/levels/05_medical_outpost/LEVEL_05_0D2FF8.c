/* LEVEL_05:0x0D2FF8 -- placement copy of LEVEL_16_0C4148.c: placement copy of LEVEL_01_0D4A50.c: sets up the scene object and clears a work buffer. */

struct Scene {
    char pad_00[0x20];
    int flags_20;
    char pad_24[0x39 - 0x24];
    unsigned char b_39;
};

extern struct Scene D_00318D40;
extern char D_00203558[];
extern char *D_001F3DF8;

extern void func_0B39A8(void *value);
extern int func_0B45C8(int a);
extern void func_0ACCC8(int a, void *buf, float f);
extern int func_0A6C40(void *buf);
extern int func_0A6C70(void *buf);
extern int func_0A6CA0(void *buf);
extern int func_0A6D58(void *buf);
extern void func_0A99A0(struct Scene *s, short a, short b, short c, short d, int e);
extern char *func_0A49A0(int);
extern void func_12F750(int a, char *b, char *c);
extern void *memset(void *p, int c, unsigned int n);
extern void func_0D3128(void);

void func_0D2FF8(void)
{
    float buf[4];
    short x;
    short y;
    short z;
    char *p;
    struct Scene *s;

    func_0B39A8(0);
    func_0B45C8(6);
    func_0ACCC8(0x1CC, buf, 0.0f);
    s = &D_00318D40;
    x = func_0A6C40(buf);
    y = func_0A6C70(buf);
    z = func_0A6CA0(buf);
    func_0A99A0(s, x, y, z, (short)func_0A6D58(buf), 0x40602020);
    s->flags_20 |= 0x840;
    s->b_39 = 0;
    p = func_0A49A0(0);
    D_001F3DF8 = func_0A49A0(1);
    func_12F750(0, D_00203558, p);
    func_12F750(1, D_00203558, p + 0x10000);
    memset(D_001F3DF8, 0, 0x20000);
    func_0D3128();
}
