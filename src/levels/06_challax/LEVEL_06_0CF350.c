/* LEVEL_06:0x0CF350 -- placement copy of LEVEL_16_0C4148.c: placement copy of LEVEL_01_0D4A50.c: sets up the scene object and clears a work buffer. */

struct Scene {
    char pad_00[0x20];
    int flags_20;
    char pad_24[0x39 - 0x24];
    unsigned char b_39;
};

extern struct Scene D_00319C00;
extern char D_002034D8[];
extern char *D_001F3978;

extern void func_0AFC28(void *value);
extern int func_0B0848(int a);
extern void func_0A8ED8(int a, void *buf, float f);
extern int func_0A2E50(void *buf);
extern int func_0A2E80(void *buf);
extern int func_0A2EB0(void *buf);
extern int func_0A2F68(void *buf);
extern void func_0A5BB0(struct Scene *s, short a, short b, short c, short d, int e);
extern char *func_0A0BB0(int);
extern void func_12A4A8(int a, char *b, char *c);
extern void *memset(void *p, int c, unsigned int n);
extern void func_0CF480(void);

void func_0CF350(void)
{
    float buf[4];
    short x;
    short y;
    short z;
    char *p;
    struct Scene *s;

    func_0AFC28(0);
    func_0B0848(6);
    func_0A8ED8(0x1CC, buf, 0.0f);
    s = &D_00319C00;
    x = func_0A2E50(buf);
    y = func_0A2E80(buf);
    z = func_0A2EB0(buf);
    func_0A5BB0(s, x, y, z, (short)func_0A2F68(buf), 0x40602020);
    s->flags_20 |= 0x840;
    s->b_39 = 0;
    p = func_0A0BB0(0);
    D_001F3978 = func_0A0BB0(1);
    func_12A4A8(0, D_002034D8, p);
    func_12A4A8(1, D_002034D8, p + 0x10000);
    memset(D_001F3978, 0, 0x20000);
    func_0CF480();
}
