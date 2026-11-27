/* LEVEL_06:0x0CB028 -- placement copy of LEVEL_01_0D0728.c: initializes the menu state and configures the main panel from queried values. */
typedef struct {
    char pad0[0x20];
    unsigned int flags;
    char pad24[0x15];
    unsigned char b39;
} Panel;

extern int D_001F34A8;
extern int D_001F2388;
extern char D_001F2399;
extern int D_001F239C;
extern unsigned int D_001F23A0;
extern Panel D_00319788;

extern void func_028490(void);
extern int func_0B0848(int a);
extern void func_0AFC28(void *value);
extern void func_0D1630(int a);
extern void func_0CB138(void);
extern void func_0CB7C0(void);
extern void func_0A8ED8(int id, void *buf, float v);
extern int func_0A2E50(void *buf);
extern int func_0A2E80(void *buf);
extern int func_0A2EB0(void *buf);
extern int func_0A2F68(void *buf);
extern void func_0A5BB0(Panel *p, short a, short b, short c, short d, unsigned int e);

void func_0CB028(void)
{
    int buf[4];
    short a, b, c, d;
    Panel *p;

    func_028490();
    func_0B0848(6);
    D_001F34A8 = 0;
    func_0AFC28((void *)1);
    func_0D1630(1);
    p = &D_00319788;
    func_0CB138();
    D_001F2399 = 0;
    D_001F2388 = 1;
    D_001F239C = 0;
    func_0CB7C0();
    D_001F23A0 = 0xFFFFFFFF;
    func_0A8ED8(0x2BC, buf, 0.0f);
    a = func_0A2E50(buf);
    b = func_0A2E80(buf);
    c = func_0A2EB0(buf);
    d = func_0A2F68(buf);
    func_0A5BB0(p, a, b, c, d, 0x40602020);
    p->flags |= 0x840;
    p->b39 = 0;
}
