/* LEVEL_22:0x0C2F90 -- placement copy of LEVEL_16_0C4148.c: placement copy of LEVEL_01_0D4A50.c: sets up the scene object and clears a work buffer. */

struct Scene {
    char pad_00[0x20];
    int flags_20;
    char pad_24[0x39 - 0x24];
    unsigned char b_39;
};

extern struct Scene D_00282A40;
extern char D_00171AD8[];
extern char *D_00163DF8;

extern void func_0A39E0(void *value);
extern int func_0A4570(int a);
extern void func_09CD18(int a, void *buf, float f);
extern int func_096C90(void *buf);
extern int func_096CC0(void *buf);
extern int func_096CF0(void *buf);
extern int func_096DA8(void *buf);
extern void func_0999F0(struct Scene *s, short a, short b, short c, short d, int e);
extern char *func_0949F0(int);
extern void func_10B2A8(int a, char *b, char *c);
extern void *memset(void *p, int c, unsigned int n);
extern void func_0C30C0(void);

void func_0C2F90(void)
{
    float buf[4];
    short x;
    short y;
    short z;
    char *p;
    struct Scene *s;

    func_0A39E0(0);
    func_0A4570(6);
    func_09CD18(0x1CC, buf, 0.0f);
    s = &D_00282A40;
    x = func_096C90(buf);
    y = func_096CC0(buf);
    z = func_096CF0(buf);
    func_0999F0(s, x, y, z, (short)func_096DA8(buf), 0x40602020);
    s->flags_20 |= 0x840;
    s->b_39 = 0;
    p = func_0949F0(0);
    D_00163DF8 = func_0949F0(1);
    func_10B2A8(0, D_00171AD8, p);
    func_10B2A8(1, D_00171AD8, p + 0x10000);
    memset(D_00163DF8, 0, 0x20000);
    func_0C30C0();
}
