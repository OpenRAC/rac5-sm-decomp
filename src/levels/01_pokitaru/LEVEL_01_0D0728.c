/* LEVEL_01:0x0D0728 -- initializes the menu state and configures the main panel from queried values. */
typedef struct {
    char pad0[0x20];
    unsigned int flags;
    char pad24[0x15];
    unsigned char b39;
} Panel;

extern int D_002045A8;
extern int D_00203488;
extern char D_00203499;
extern int D_0020349C;
extern unsigned int D_002034A0;
extern Panel D_0032CA08;

extern void func_02A0A8(void);
extern int func_0B6020(int a);
extern void func_0B5400(void *value);
extern void func_0D6D30(int a);
extern void func_0D0838(void);
extern void func_0D0EC0(void);
extern void func_0AE708(int id, void *buf, float v);
extern int func_0A8680(void *buf);
extern int func_0A86B0(void *buf);
extern int func_0A86E0(void *buf);
extern int func_0A8798(void *buf);
extern void func_0AB3E0(Panel *p, short a, short b, short c, short d, unsigned int e);

void func_0D0728(void)
{
    int buf[4];
    short a, b, c, d;
    Panel *p;

    func_02A0A8();
    func_0B6020(6);
    D_002045A8 = 0;
    func_0B5400((void *)1);
    func_0D6D30(1);
    p = &D_0032CA08;
    func_0D0838();
    D_00203499 = 0;
    D_00203488 = 1;
    D_0020349C = 0;
    func_0D0EC0();
    D_002034A0 = 0xFFFFFFFF;
    func_0AE708(0x2BC, buf, 0.0f);
    a = func_0A8680(buf);
    b = func_0A86B0(buf);
    c = func_0A86E0(buf);
    d = func_0A8798(buf);
    func_0AB3E0(p, a, b, c, d, 0x40602020);
    p->flags |= 0x840;
    p->b39 = 0;
}
