/* LEVEL_07:0x0C5D80 -- placement copy of LEVEL_16_0B31D8.c: placement copy of LEVEL_01_0C3D20.c: reads four shorts from a query buffer, configures a global object, and runs a follow-up. */
typedef struct Glob {
    char pad0[0x20];
    unsigned int w20;
    char pad1[0x39 - 0x24];
    unsigned char b39;
} Glob;

extern Glob D_0033EB58;
extern char *D_0021468C;
extern char D_00227B88[];

extern void func_0B0708(int, void *, float);
extern int func_0AA680(void *);
extern int func_0AA6B0(void *);
extern int func_0AA6E0(void *);
extern int func_0AA798(void *);
extern void func_0AD3E0(Glob *, short, short, short, short, unsigned int);
extern char *func_0A83E0(int);
extern void func_136DD8(int, char *, char *);
extern void func_0C5E98(void);

void func_0C5D80(void)
{
    int buf[4];
    char *r0;
    char *r1;
    func_0B0708(0x203, buf, 0.0f);
    func_0AD3E0(&D_0033EB58, (short)func_0AA680(buf), (short)func_0AA6B0(buf),
                (short)func_0AA6E0(buf), (short)func_0AA798(buf), 0x40602020);
    D_0033EB58.w20 |= 0x840;
    D_0033EB58.b39 = 0;
    r0 = func_0A83E0(0);
    r1 = func_0A83E0(1);
    D_0021468C = r1;
    func_136DD8(0, D_00227B88, r0);
    func_0C5E98();
}
