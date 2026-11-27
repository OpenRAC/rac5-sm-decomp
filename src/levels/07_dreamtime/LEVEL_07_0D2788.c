/* LEVEL_07:0x0D2788 -- placement copy of LEVEL_01_0D0728.c: initializes the menu state and configures the main panel from queried values. */
typedef struct {
    char pad0[0x20];
    unsigned int flags;
    char pad24[0x15];
    unsigned char b39;
} Panel;

extern int D_002188A8;
extern int D_00217788;
extern char D_00217799;
extern int D_0021779C;
extern unsigned int D_002177A0;
extern Panel D_00342308;

extern void func_02A3E8(void);
extern int func_0B8080(int a);
extern void func_0B7460(void *value);
extern void func_0D8D90(int a);
extern void func_0D2898(void);
extern void func_0D2F20(void);
extern void func_0B0708(int id, void *buf, float v);
extern int func_0AA680(void *buf);
extern int func_0AA6B0(void *buf);
extern int func_0AA6E0(void *buf);
extern int func_0AA798(void *buf);
extern void func_0AD3E0(Panel *p, short a, short b, short c, short d, unsigned int e);

void func_0D2788(void)
{
    int buf[4];
    short a, b, c, d;
    Panel *p;

    func_02A3E8();
    func_0B8080(6);
    D_002188A8 = 0;
    func_0B7460((void *)1);
    func_0D8D90(1);
    p = &D_00342308;
    func_0D2898();
    D_00217799 = 0;
    D_00217788 = 1;
    D_0021779C = 0;
    func_0D2F20();
    D_002177A0 = 0xFFFFFFFF;
    func_0B0708(0x2BC, buf, 0.0f);
    a = func_0AA680(buf);
    b = func_0AA6B0(buf);
    c = func_0AA6E0(buf);
    d = func_0AA798(buf);
    func_0AD3E0(p, a, b, c, d, 0x40602020);
    p->flags |= 0x840;
    p->b39 = 0;
}
