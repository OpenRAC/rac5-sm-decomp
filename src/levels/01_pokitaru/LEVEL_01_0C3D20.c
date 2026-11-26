/* LEVEL_01:0x0C3D20 -- placement copy of LEVEL_16_0B31D8.c: placement copy of LEVEL_01_0C3D20.c: reads four shorts from a query buffer, configures a global object, and runs a follow-up. */
typedef struct Glob {
    char pad0[0x20];
    unsigned int w20;
    char pad1[0x39 - 0x24];
    unsigned char b39;
} Glob;

extern Glob D_00329258;
extern char *D_0020038C;
extern char D_00212E88[];

extern void func_0AE708(int, void *, float);
extern int func_0A8680(void *);
extern int func_0A86B0(void *);
extern int func_0A86E0(void *);
extern int func_0A8798(void *);
extern void func_0AB3E0(Glob *, short, short, short, short, unsigned int);
extern char *func_0A63E0(int);
extern void func_133DD8(int, char *, char *);
extern void func_0C3E38(void);

void func_0C3D20(void)
{
    int buf[4];
    char *r0;
    char *r1;
    func_0AE708(0x203, buf, 0.0f);
    func_0AB3E0(&D_00329258, (short)func_0A8680(buf), (short)func_0A86B0(buf),
                (short)func_0A86E0(buf), (short)func_0A8798(buf), 0x40602020);
    D_00329258.w20 |= 0x840;
    D_00329258.b39 = 0;
    r0 = func_0A63E0(0);
    r1 = func_0A63E0(1);
    D_0020038C = r1;
    func_133DD8(0, D_00212E88, r0);
    func_0C3E38();
}
