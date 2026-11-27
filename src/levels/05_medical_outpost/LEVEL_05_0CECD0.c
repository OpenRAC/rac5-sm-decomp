/* LEVEL_05:0x0CECD0 -- placement copy of LEVEL_01_0D0728.c: initializes the menu state and configures the main panel from queried values. */
typedef struct {
    char pad0[0x20];
    unsigned int flags;
    char pad24[0x15];
    unsigned char b39;
} Panel;

extern int D_001F3928;
extern int D_001F2808;
extern char D_001F2819;
extern int D_001F281C;
extern unsigned int D_001F2820;
extern Panel D_003188C8;

extern void func_028D20(void);
extern int func_0B45C8(int a);
extern void func_0B39A8(void *value);
extern void func_0D52D8(int a);
extern void func_0CEDE0(void);
extern void func_0CF468(void);
extern void func_0ACCC8(int id, void *buf, float v);
extern int func_0A6C40(void *buf);
extern int func_0A6C70(void *buf);
extern int func_0A6CA0(void *buf);
extern int func_0A6D58(void *buf);
extern void func_0A99A0(Panel *p, short a, short b, short c, short d, unsigned int e);

void func_0CECD0(void)
{
    int buf[4];
    short a, b, c, d;
    Panel *p;

    func_028D20();
    func_0B45C8(6);
    D_001F3928 = 0;
    func_0B39A8((void *)1);
    func_0D52D8(1);
    p = &D_003188C8;
    func_0CEDE0();
    D_001F2819 = 0;
    D_001F2808 = 1;
    D_001F281C = 0;
    func_0CF468();
    D_001F2820 = 0xFFFFFFFF;
    func_0ACCC8(0x2BC, buf, 0.0f);
    a = func_0A6C40(buf);
    b = func_0A6C70(buf);
    c = func_0A6CA0(buf);
    d = func_0A6D58(buf);
    func_0A99A0(p, a, b, c, d, 0x40602020);
    p->flags |= 0x840;
    p->b39 = 0;
}
