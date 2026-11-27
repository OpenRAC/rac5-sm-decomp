/* LEVEL_04:0x0D5FC0 -- placement copy of LEVEL_01_0D0728.c: initializes the menu state and configures the main panel from queried values. */
typedef struct {
    char pad0[0x20];
    unsigned int flags;
    char pad24[0x15];
    unsigned char b39;
} Panel;

extern int D_0021DA68;
extern int D_0021C948;
extern char D_0021C959;
extern int D_0021C95C;
extern unsigned int D_0021C960;
extern Panel D_00347208;

extern void func_029B50(void);
extern int func_0BB828(int a);
extern void func_0BAAF0(void *value);
extern void func_0DC5E0(int a);
extern void func_0D60D0(void);
extern void func_0D6758(void);
extern void func_0B3958(int id, void *buf, float v);
extern int func_0AD890(void *buf);
extern int func_0AD8C0(void *buf);
extern int func_0AD8F0(void *buf);
extern int func_0AD9A8(void *buf);
extern void func_0B0630(Panel *p, short a, short b, short c, short d, unsigned int e);

void func_0D5FC0(void)
{
    int buf[4];
    short a, b, c, d;
    Panel *p;

    func_029B50();
    func_0BB828(6);
    D_0021DA68 = 0;
    func_0BAAF0((void *)1);
    func_0DC5E0(1);
    p = &D_00347208;
    func_0D60D0();
    D_0021C959 = 0;
    D_0021C948 = 1;
    D_0021C95C = 0;
    func_0D6758();
    D_0021C960 = 0xFFFFFFFF;
    func_0B3958(0x2BC, buf, 0.0f);
    a = func_0AD890(buf);
    b = func_0AD8C0(buf);
    c = func_0AD8F0(buf);
    d = func_0AD9A8(buf);
    func_0B0630(p, a, b, c, d, 0x40602020);
    p->flags |= 0x840;
    p->b39 = 0;
}
