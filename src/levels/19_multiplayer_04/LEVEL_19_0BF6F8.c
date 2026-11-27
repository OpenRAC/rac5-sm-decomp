/* LEVEL_19:0x0BF6F8 -- placement copy of LEVEL_01_0D0728.c: initializes the menu state and configures the main panel from queried values. */
typedef struct {
    char pad0[0x20];
    unsigned int flags;
    char pad24[0x15];
    unsigned char b39;
} Panel;

extern int D_001B35D8;
extern int D_001B24B8;
extern char D_001B24C9;
extern int D_001B24CC;
extern unsigned int D_001B24D0;
extern Panel D_0027AC08;

extern void func_0276A8(void);
extern int func_0A4928(int a);
extern void func_0A3B78(void *value);
extern void func_0C5D00(int a);
extern void func_0BF808(void);
extern void func_0BFE90(void);
extern void func_09C688(int id, void *buf, float v);
extern int func_0965A0(void *buf);
extern int func_0965D0(void *buf);
extern int func_096600(void *buf);
extern int func_0966B8(void *buf);
extern void func_099360(Panel *p, short a, short b, short c, short d, unsigned int e);

void func_0BF6F8(void)
{
    int buf[4];
    short a, b, c, d;
    Panel *p;

    func_0276A8();
    func_0A4928(6);
    D_001B35D8 = 0;
    func_0A3B78((void *)1);
    func_0C5D00(1);
    p = &D_0027AC08;
    func_0BF808();
    D_001B24C9 = 0;
    D_001B24B8 = 1;
    D_001B24CC = 0;
    func_0BFE90();
    D_001B24D0 = 0xFFFFFFFF;
    func_09C688(0x2BC, buf, 0.0f);
    a = func_0965A0(buf);
    b = func_0965D0(buf);
    c = func_096600(buf);
    d = func_0966B8(buf);
    func_099360(p, a, b, c, d, 0x40602020);
    p->flags |= 0x840;
    p->b39 = 0;
}
