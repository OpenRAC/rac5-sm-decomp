/* LEVEL_18:0x0BEDF8 -- placement copy of LEVEL_01_0D0728.c: initializes the menu state and configures the main panel from queried values. */
typedef struct {
    char pad0[0x20];
    unsigned int flags;
    char pad24[0x15];
    unsigned char b39;
} Panel;

extern int D_001B38D8;
extern int D_001B27B8;
extern char D_001B27C9;
extern int D_001B27CC;
extern unsigned int D_001B27D0;
extern Panel D_0027AE08;

extern void func_0270B0(void);
extern int func_0A40A8(int a);
extern void func_0A32F8(void *value);
extern void func_0C5400(int a);
extern void func_0BEF08(void);
extern void func_0BF590(void);
extern void func_09BE08(int id, void *buf, float v);
extern int func_095D20(void *buf);
extern int func_095D50(void *buf);
extern int func_095D80(void *buf);
extern int func_095E38(void *buf);
extern void func_098AE0(Panel *p, short a, short b, short c, short d, unsigned int e);

void func_0BEDF8(void)
{
    int buf[4];
    short a, b, c, d;
    Panel *p;

    func_0270B0();
    func_0A40A8(6);
    D_001B38D8 = 0;
    func_0A32F8((void *)1);
    func_0C5400(1);
    p = &D_0027AE08;
    func_0BEF08();
    D_001B27C9 = 0;
    D_001B27B8 = 1;
    D_001B27CC = 0;
    func_0BF590();
    D_001B27D0 = 0xFFFFFFFF;
    func_09BE08(0x2BC, buf, 0.0f);
    a = func_095D20(buf);
    b = func_095D50(buf);
    c = func_095D80(buf);
    d = func_095E38(buf);
    func_098AE0(p, a, b, c, d, 0x40602020);
    p->flags |= 0x840;
    p->b39 = 0;
}
