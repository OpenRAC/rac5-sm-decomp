/* LEVEL_03:0x0D0510 -- placement copy of LEVEL_01_0D0728.c: initializes the menu state and configures the main panel from queried values. */
typedef struct {
    char pad0[0x20];
    unsigned int flags;
    char pad24[0x15];
    unsigned char b39;
} Panel;

extern int D_0021CC28;
extern int D_0021BB08;
extern char D_0021BB19;
extern int D_0021BB1C;
extern unsigned int D_0021BB20;
extern Panel D_00347888;

extern void func_029EA0(void);
extern int func_0B5E08(int a);
extern void func_0B51E8(void *value);
extern void func_0D6B18(int a);
extern void func_0D0620(void);
extern void func_0D0CA8(void);
extern void func_0AE488(int id, void *buf, float v);
extern int func_0A8400(void *buf);
extern int func_0A8430(void *buf);
extern int func_0A8460(void *buf);
extern int func_0A8518(void *buf);
extern void func_0AB160(Panel *p, short a, short b, short c, short d, unsigned int e);

void func_0D0510(void)
{
    int buf[4];
    short a, b, c, d;
    Panel *p;

    func_029EA0();
    func_0B5E08(6);
    D_0021CC28 = 0;
    func_0B51E8((void *)1);
    func_0D6B18(1);
    p = &D_00347888;
    func_0D0620();
    D_0021BB19 = 0;
    D_0021BB08 = 1;
    D_0021BB1C = 0;
    func_0D0CA8();
    D_0021BB20 = 0xFFFFFFFF;
    func_0AE488(0x2BC, buf, 0.0f);
    a = func_0A8400(buf);
    b = func_0A8430(buf);
    c = func_0A8460(buf);
    d = func_0A8518(buf);
    func_0AB160(p, a, b, c, d, 0x40602020);
    p->flags |= 0x840;
    p->b39 = 0;
}
