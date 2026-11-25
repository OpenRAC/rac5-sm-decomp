/* LEVEL_10:0x0D5E90 -- placement copy of LEVEL_16_0C4148.c: placement copy of LEVEL_01_0D4A50.c: sets up the scene object and clears a work buffer. */

struct Scene {
    char pad_00[0x20];
    int flags_20;
    char pad_24[0x39 - 0x24];
    unsigned char b_39;
};

extern struct Scene D_00336280;
extern char D_0021D5D8[];
extern char *D_0020DA78;

extern void func_0B65D8(void *value);
extern int func_0B71F8(int a);
extern void func_0AF820(int a, void *buf, float f);
extern int func_0A9798(void *buf);
extern int func_0A97C8(void *buf);
extern int func_0A97F8(void *buf);
extern int func_0A98B0(void *buf);
extern void func_0AC4F8(struct Scene *s, short a, short b, short c, short d, int e);
extern char *func_0A74F8(int);
extern void func_131C58(int a, char *b, char *c);
extern void *memset(void *p, int c, unsigned int n);
extern void func_0D5FC0(void);

void func_0D5E90(void)
{
    float buf[4];
    short x;
    short y;
    short z;
    char *p;
    struct Scene *s;

    func_0B65D8(0);
    func_0B71F8(6);
    func_0AF820(0x1CC, buf, 0.0f);
    s = &D_00336280;
    x = func_0A9798(buf);
    y = func_0A97C8(buf);
    z = func_0A97F8(buf);
    func_0AC4F8(s, x, y, z, (short)func_0A98B0(buf), 0x40602020);
    s->flags_20 |= 0x840;
    s->b_39 = 0;
    p = func_0A74F8(0);
    D_0020DA78 = func_0A74F8(1);
    func_131C58(0, D_0021D5D8, p);
    func_131C58(1, D_0021D5D8, p + 0x10000);
    memset(D_0020DA78, 0, 0x20000);
    func_0D5FC0();
}
