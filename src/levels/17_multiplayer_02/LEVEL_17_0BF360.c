/* LEVEL_17:0x0BF360 -- placement copy of LEVEL_01_0D0728.c: initializes the menu state and configures the main panel from queried values. */
typedef struct {
    char pad0[0x20];
    unsigned int flags;
    char pad24[0x15];
    unsigned char b39;
} Panel;

extern int D_001A5A58;
extern int D_001A4938;
extern char D_001A4949;
extern int D_001A494C;
extern unsigned int D_001A4950;
extern Panel D_0026BD88;

extern void func_027480(void);
extern int func_0A4590(int a);
extern void func_0A37E0(void *value);
extern void func_0C5968(int a);
extern void func_0BF470(void);
extern void func_0BFAF8(void);
extern void func_09C2F0(int id, void *buf, float v);
extern int func_096208(void *buf);
extern int func_096238(void *buf);
extern int func_096268(void *buf);
extern int func_096320(void *buf);
extern void func_098FC8(Panel *p, short a, short b, short c, short d, unsigned int e);

void func_0BF360(void)
{
    int buf[4];
    short a, b, c, d;
    Panel *p;

    func_027480();
    func_0A4590(6);
    D_001A5A58 = 0;
    func_0A37E0((void *)1);
    func_0C5968(1);
    p = &D_0026BD88;
    func_0BF470();
    D_001A4949 = 0;
    D_001A4938 = 1;
    D_001A494C = 0;
    func_0BFAF8();
    D_001A4950 = 0xFFFFFFFF;
    func_09C2F0(0x2BC, buf, 0.0f);
    a = func_096208(buf);
    b = func_096238(buf);
    c = func_096268(buf);
    d = func_096320(buf);
    func_098FC8(p, a, b, c, d, 0x40602020);
    p->flags |= 0x840;
    p->b39 = 0;
}
