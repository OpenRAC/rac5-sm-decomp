/* LEVEL_04:0x0DA2F8 -- placement copy of LEVEL_16_0C4148.c: placement copy of LEVEL_01_0D4A50.c: sets up the scene object and clears a work buffer. */

struct Scene {
    char pad_00[0x20];
    int flags_20;
    char pad_24[0x39 - 0x24];
    unsigned char b_39;
};

extern struct Scene D_00347680;
extern char D_0022DFD8[];
extern char *D_0021DF38;

extern void func_0BAAF0(void *value);
extern int func_0BB828(int a);
extern void func_0B3958(int a, void *buf, float f);
extern int func_0AD890(void *buf);
extern int func_0AD8C0(void *buf);
extern int func_0AD8F0(void *buf);
extern int func_0AD9A8(void *buf);
extern void func_0B0630(struct Scene *s, short a, short b, short c, short d, int e);
extern char *func_0AB5F0(int);
extern void func_140258(int a, char *b, char *c);
extern void *memset(void *p, int c, unsigned int n);
extern void func_0DA428(void);

void func_0DA2F8(void)
{
    float buf[4];
    short x;
    short y;
    short z;
    char *p;
    struct Scene *s;

    func_0BAAF0(0);
    func_0BB828(6);
    func_0B3958(0x1CC, buf, 0.0f);
    s = &D_00347680;
    x = func_0AD890(buf);
    y = func_0AD8C0(buf);
    z = func_0AD8F0(buf);
    func_0B0630(s, x, y, z, (short)func_0AD9A8(buf), 0x40602020);
    s->flags_20 |= 0x840;
    s->b_39 = 0;
    p = func_0AB5F0(0);
    D_0021DF38 = func_0AB5F0(1);
    func_140258(0, D_0022DFD8, p);
    func_140258(1, D_0022DFD8, p + 0x10000);
    memset(D_0021DF38, 0, 0x20000);
    func_0DA428();
}
