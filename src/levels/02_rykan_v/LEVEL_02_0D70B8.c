/* LEVEL_02:0x0D70B8 -- placement copy of LEVEL_01_0D0728.c: initializes the menu state and configures the main panel from queried values. */
typedef struct {
    char pad0[0x20];
    unsigned int flags;
    char pad24[0x15];
    unsigned char b39;
} Panel;

extern int D_00219568;
extern int D_00218448;
extern char D_00218459;
extern int D_0021845C;
extern unsigned int D_00218460;
extern Panel D_00343F08;

extern void func_02A870(void);
extern int func_0BC930(int a);
extern void func_0BBD10(void *value);
extern void func_0DD6C0(int a);
extern void func_0D71C8(void);
extern void func_0D7850(void);
extern void func_0B5018(int id, void *buf, float v);
extern int func_0AEF90(void *buf);
extern int func_0AEFC0(void *buf);
extern int func_0AEFF0(void *buf);
extern int func_0AF0A8(void *buf);
extern void func_0B1CF0(Panel *p, short a, short b, short c, short d, unsigned int e);

void func_0D70B8(void)
{
    int buf[4];
    short a, b, c, d;
    Panel *p;

    func_02A870();
    func_0BC930(6);
    D_00219568 = 0;
    func_0BBD10((void *)1);
    func_0DD6C0(1);
    p = &D_00343F08;
    func_0D71C8();
    D_00218459 = 0;
    D_00218448 = 1;
    D_0021845C = 0;
    func_0D7850();
    D_00218460 = 0xFFFFFFFF;
    func_0B5018(0x2BC, buf, 0.0f);
    a = func_0AEF90(buf);
    b = func_0AEFC0(buf);
    c = func_0AEFF0(buf);
    d = func_0AF0A8(buf);
    func_0B1CF0(p, a, b, c, d, 0x40602020);
    p->flags |= 0x840;
    p->b39 = 0;
}
