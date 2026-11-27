/* LEVEL_08:0x0DB6D0 -- placement copy of LEVEL_01_0D0728.c: initializes the menu state and configures the main panel from queried values. */
typedef struct {
    char pad0[0x20];
    unsigned int flags;
    char pad24[0x15];
    unsigned char b39;
} Panel;

extern int D_0024D468;
extern int D_0024C348;
extern char D_0024C359;
extern int D_0024C35C;
extern unsigned int D_0024C360;
extern Panel D_0037BC88;

extern void func_02A620(void);
extern int func_0C0F10(int a);
extern void func_0C01D8(void *value);
extern void func_0E1CF0(int a);
extern void func_0DB7E0(void);
extern void func_0DBE68(void);
extern void func_0B9040(int id, void *buf, float v);
extern int func_0B2F78(void *buf);
extern int func_0B2FA8(void *buf);
extern int func_0B2FD8(void *buf);
extern int func_0B3090(void *buf);
extern void func_0B5D18(Panel *p, short a, short b, short c, short d, unsigned int e);

void func_0DB6D0(void)
{
    int buf[4];
    short a, b, c, d;
    Panel *p;

    func_02A620();
    func_0C0F10(6);
    D_0024D468 = 0;
    func_0C01D8((void *)1);
    func_0E1CF0(1);
    p = &D_0037BC88;
    func_0DB7E0();
    D_0024C359 = 0;
    D_0024C348 = 1;
    D_0024C35C = 0;
    func_0DBE68();
    D_0024C360 = 0xFFFFFFFF;
    func_0B9040(0x2BC, buf, 0.0f);
    a = func_0B2F78(buf);
    b = func_0B2FA8(buf);
    c = func_0B2FD8(buf);
    d = func_0B3090(buf);
    func_0B5D18(p, a, b, c, d, 0x40602020);
    p->flags |= 0x840;
    p->b39 = 0;
}
