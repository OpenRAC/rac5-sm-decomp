/* LEVEL_22:0x0BEC68 -- placement copy of LEVEL_01_0D0728.c: initializes the menu state and configures the main panel from queried values. */
typedef struct {
    char pad0[0x20];
    unsigned int flags;
    char pad24[0x15];
    unsigned char b39;
} Panel;

extern int D_00163928;
extern int D_00162808;
extern char D_00162819;
extern int D_0016281C;
extern unsigned int D_00162820;
extern Panel D_002825C8;

extern void func_024640(void);
extern int func_0A4570(int a);
extern void func_0A39E0(void *value);
extern void func_0C5270(int a);
extern void func_0BED78(void);
extern void func_0BF400(void);
extern void func_09CD18(int id, void *buf, float v);
extern int func_096C90(void *buf);
extern int func_096CC0(void *buf);
extern int func_096CF0(void *buf);
extern int func_096DA8(void *buf);
extern void func_0999F0(Panel *p, short a, short b, short c, short d, unsigned int e);

void func_0BEC68(void)
{
    int buf[4];
    short a, b, c, d;
    Panel *p;

    func_024640();
    func_0A4570(6);
    D_00163928 = 0;
    func_0A39E0((void *)1);
    func_0C5270(1);
    p = &D_002825C8;
    func_0BED78();
    D_00162819 = 0;
    D_00162808 = 1;
    D_0016281C = 0;
    func_0BF400();
    D_00162820 = 0xFFFFFFFF;
    func_09CD18(0x2BC, buf, 0.0f);
    a = func_096C90(buf);
    b = func_096CC0(buf);
    c = func_096CF0(buf);
    d = func_096DA8(buf);
    func_0999F0(p, a, b, c, d, 0x40602020);
    p->flags |= 0x840;
    p->b39 = 0;
}
