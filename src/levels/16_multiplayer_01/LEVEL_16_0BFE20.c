/* LEVEL_16:0x0BFE20 -- placement copy of LEVEL_01_0D0728.c: initializes the menu state and configures the main panel from queried values. */
typedef struct {
    char pad0[0x20];
    unsigned int flags;
    char pad24[0x15];
    unsigned char b39;
} Panel;

extern int D_001B2458;
extern int D_001B1338;
extern char D_001B1349;
extern int D_001B134C;
extern unsigned int D_001B1350;
extern Panel D_0027AA88;

extern void func_027B00(void);
extern int func_0A50B0(int a);
extern void func_0A4300(void *value);
extern void func_0C6428(int a);
extern void func_0BFF30(void);
extern void func_0C05B8(void);
extern void func_09CDF8(int id, void *buf, float v);
extern int func_096D10(void *buf);
extern int func_096D40(void *buf);
extern int func_096D70(void *buf);
extern int func_096E28(void *buf);
extern void func_099AD0(Panel *p, short a, short b, short c, short d, unsigned int e);

void func_0BFE20(void)
{
    int buf[4];
    short a, b, c, d;
    Panel *p;

    func_027B00();
    func_0A50B0(6);
    D_001B2458 = 0;
    func_0A4300((void *)1);
    func_0C6428(1);
    p = &D_0027AA88;
    func_0BFF30();
    D_001B1349 = 0;
    D_001B1338 = 1;
    D_001B134C = 0;
    func_0C05B8();
    D_001B1350 = 0xFFFFFFFF;
    func_09CDF8(0x2BC, buf, 0.0f);
    a = func_096D10(buf);
    b = func_096D40(buf);
    c = func_096D70(buf);
    d = func_096E28(buf);
    func_099AD0(p, a, b, c, d, 0x40602020);
    p->flags |= 0x840;
    p->b39 = 0;
}
