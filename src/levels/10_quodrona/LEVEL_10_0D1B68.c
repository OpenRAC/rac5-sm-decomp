/* LEVEL_10:0x0D1B68 -- placement copy of LEVEL_01_0D0728.c: initializes the menu state and configures the main panel from queried values. */
typedef struct {
    char pad0[0x20];
    unsigned int flags;
    char pad24[0x15];
    unsigned char b39;
} Panel;

extern int D_0020D5A8;
extern int D_0020C488;
extern char D_0020C499;
extern int D_0020C49C;
extern unsigned int D_0020C4A0;
extern Panel D_00335E08;

extern void func_029E80(void);
extern int func_0B71F8(int a);
extern void func_0B65D8(void *value);
extern void func_0D8170(int a);
extern void func_0D1C78(void);
extern void func_0D2300(void);
extern void func_0AF820(int id, void *buf, float v);
extern int func_0A9798(void *buf);
extern int func_0A97C8(void *buf);
extern int func_0A97F8(void *buf);
extern int func_0A98B0(void *buf);
extern void func_0AC4F8(Panel *p, short a, short b, short c, short d, unsigned int e);

void func_0D1B68(void)
{
    int buf[4];
    short a, b, c, d;
    Panel *p;

    func_029E80();
    func_0B71F8(6);
    D_0020D5A8 = 0;
    func_0B65D8((void *)1);
    func_0D8170(1);
    p = &D_00335E08;
    func_0D1C78();
    D_0020C499 = 0;
    D_0020C488 = 1;
    D_0020C49C = 0;
    func_0D2300();
    D_0020C4A0 = 0xFFFFFFFF;
    func_0AF820(0x2BC, buf, 0.0f);
    a = func_0A9798(buf);
    b = func_0A97C8(buf);
    c = func_0A97F8(buf);
    d = func_0A98B0(buf);
    func_0AC4F8(p, a, b, c, d, 0x40602020);
    p->flags |= 0x840;
    p->b39 = 0;
}
