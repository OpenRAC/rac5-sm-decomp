/* LEVEL_21:0x0B0D68 -- placement copy of LEVEL_01_0D0728.c: initializes the menu state and configures the main panel from queried values. */
typedef struct {
    char pad0[0x20];
    unsigned int flags;
    char pad24[0x15];
    unsigned char b39;
} Panel;

extern int D_00159228;
extern int D_00158108;
extern char D_00158119;
extern int D_0015811C;
extern unsigned int D_00158120;
extern Panel D_00244248;

extern void func_023880(void);
extern int func_096530(int a);
extern void func_0959A0(void *value);
extern void func_0B7370(int a);
extern void func_0B0E78(void);
extern void func_0B1500(void);
extern void func_08EFD0(int id, void *buf, float v);
extern int func_088F48(void *buf);
extern int func_088F78(void *buf);
extern int func_088FA8(void *buf);
extern int func_089060(void *buf);
extern void func_08BCA8(Panel *p, short a, short b, short c, short d, unsigned int e);

void func_0B0D68(void)
{
    int buf[4];
    short a, b, c, d;
    Panel *p;

    func_023880();
    func_096530(6);
    D_00159228 = 0;
    func_0959A0((void *)1);
    func_0B7370(1);
    p = &D_00244248;
    func_0B0E78();
    D_00158119 = 0;
    D_00158108 = 1;
    D_0015811C = 0;
    func_0B1500();
    D_00158120 = 0xFFFFFFFF;
    func_08EFD0(0x2BC, buf, 0.0f);
    a = func_088F48(buf);
    b = func_088F78(buf);
    c = func_088FA8(buf);
    d = func_089060(buf);
    func_08BCA8(p, a, b, c, d, 0x40602020);
    p->flags |= 0x840;
    p->b39 = 0;
}
