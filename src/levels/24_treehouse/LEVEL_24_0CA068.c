/* LEVEL_24:0x0CA068 -- placement copy of LEVEL_01_0D0728.c: initializes the menu state and configures the main panel from queried values. */
typedef struct {
    char pad0[0x20];
    unsigned int flags;
    char pad24[0x15];
    unsigned char b39;
} Panel;

extern int D_001D5228;
extern int D_001D4108;
extern char D_001D4119;
extern int D_001D411C;
extern unsigned int D_001D4120;
extern Panel D_002F88C8;

extern void func_0275E8(void);
extern int func_0AF8B0(int a);
extern void func_0AEC90(void *value);
extern void func_0D0688(int a);
extern void func_0CA178(void);
extern void func_0CA800(void);
extern void func_0A7F80(int id, void *buf, float v);
extern int func_0A1EF8(void *buf);
extern int func_0A1F28(void *buf);
extern int func_0A1F58(void *buf);
extern int func_0A2010(void *buf);
extern void func_0A4C58(Panel *p, short a, short b, short c, short d, unsigned int e);

void func_0CA068(void)
{
    int buf[4];
    short a, b, c, d;
    Panel *p;

    func_0275E8();
    func_0AF8B0(6);
    D_001D5228 = 0;
    func_0AEC90((void *)1);
    func_0D0688(1);
    p = &D_002F88C8;
    func_0CA178();
    D_001D4119 = 0;
    D_001D4108 = 1;
    D_001D411C = 0;
    func_0CA800();
    D_001D4120 = 0xFFFFFFFF;
    func_0A7F80(0x2BC, buf, 0.0f);
    a = func_0A1EF8(buf);
    b = func_0A1F28(buf);
    c = func_0A1F58(buf);
    d = func_0A2010(buf);
    func_0A4C58(p, a, b, c, d, 0x40602020);
    p->flags |= 0x840;
    p->b39 = 0;
}
