/* LEVEL_09:0x0CD9D8 -- placement copy of LEVEL_01_0D0728.c: initializes the menu state and configures the main panel from queried values. */
typedef struct {
    char pad0[0x20];
    unsigned int flags;
    char pad24[0x15];
    unsigned char b39;
} Panel;

extern int D_001EE3A8;
extern int D_001ED288;
extern char D_001ED299;
extern int D_001ED29C;
extern unsigned int D_001ED2A0;
extern Panel D_00314188;

extern void func_028F10(void);
extern int func_0B32D0(int a);
extern void func_0B26B0(void *value);
extern void func_0D3FE0(int a);
extern void func_0CDAE8(void);
extern void func_0CE170(void);
extern void func_0AB9B8(int id, void *buf, float v);
extern int func_0A5930(void *buf);
extern int func_0A5960(void *buf);
extern int func_0A5990(void *buf);
extern int func_0A5A48(void *buf);
extern void func_0A8690(Panel *p, short a, short b, short c, short d, unsigned int e);

void func_0CD9D8(void)
{
    int buf[4];
    short a, b, c, d;
    Panel *p;

    func_028F10();
    func_0B32D0(6);
    D_001EE3A8 = 0;
    func_0B26B0((void *)1);
    func_0D3FE0(1);
    p = &D_00314188;
    func_0CDAE8();
    D_001ED299 = 0;
    D_001ED288 = 1;
    D_001ED29C = 0;
    func_0CE170();
    D_001ED2A0 = 0xFFFFFFFF;
    func_0AB9B8(0x2BC, buf, 0.0f);
    a = func_0A5930(buf);
    b = func_0A5960(buf);
    c = func_0A5990(buf);
    d = func_0A5A48(buf);
    func_0A8690(p, a, b, c, d, 0x40602020);
    p->flags |= 0x840;
    p->b39 = 0;
}
