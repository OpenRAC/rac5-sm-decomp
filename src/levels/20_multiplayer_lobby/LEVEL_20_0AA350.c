/* LEVEL_20:0x0AA350 -- placement copy of LEVEL_01_0D0728.c: initializes the menu state and configures the main panel from queried values. */
typedef struct {
    char pad0[0x20];
    unsigned int flags;
    char pad24[0x15];
    unsigned char b39;
} Panel;

extern int D_00114B38;
extern int D_00113A18;
extern char D_00113A29;
extern int D_00113A2C;
extern unsigned int D_00113A30;
extern Panel D_0019E2C8;

extern void func_024608(void);
extern int func_08F6B0(int a);
extern void func_08E978(void *value);
extern void func_0B0958(int a);
extern void func_0AA460(void);
extern void func_0AAAE8(void);
extern void func_0874F0(int id, void *buf, float v);
extern int func_081408(void *buf);
extern int func_081438(void *buf);
extern int func_081468(void *buf);
extern int func_081520(void *buf);
extern void func_0841C8(Panel *p, short a, short b, short c, short d, unsigned int e);

void func_0AA350(void)
{
    int buf[4];
    short a, b, c, d;
    Panel *p;

    func_024608();
    func_08F6B0(6);
    D_00114B38 = 0;
    func_08E978((void *)1);
    func_0B0958(1);
    p = &D_0019E2C8;
    func_0AA460();
    D_00113A29 = 0;
    D_00113A18 = 1;
    D_00113A2C = 0;
    func_0AAAE8();
    D_00113A30 = 0xFFFFFFFF;
    func_0874F0(0x2BC, buf, 0.0f);
    a = func_081408(buf);
    b = func_081438(buf);
    c = func_081468(buf);
    d = func_081520(buf);
    func_0841C8(p, a, b, c, d, 0x40602020);
    p->flags |= 0x840;
    p->b39 = 0;
}
