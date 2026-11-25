/* LEVEL_16:0x0B31D8 -- placement copy of LEVEL_01_0C3D20.c: reads four shorts from a query buffer, configures a global object, and runs a follow-up. */
typedef struct Glob {
    char pad0[0x20];
    unsigned int w20;
    char pad1[0x39 - 0x24];
    unsigned char b39;
} Glob;

extern Glob D_00277198;
extern char *D_001AE404;
extern char D_001C7BC8[];

extern void func_09CDF8(int, void *, float);
extern int func_096D10(void *);
extern int func_096D40(void *);
extern int func_096D70(void *);
extern int func_096E28(void *);
extern void func_099AD0(Glob *, short, short, short, short, unsigned int);
extern int func_0956C0(void);
extern void func_110B48(int, char *, char *);
extern void func_0B32F0(void);

void func_0B31D8(void)
{
    int buf[4];
    char *r0;
    char *r1;
    func_09CDF8(0x203, buf, 0.0f);
    func_099AD0(&D_00277198, (short)func_096D10(buf), (short)func_096D40(buf),
                (short)func_096D70(buf), (short)func_096E28(buf), 0x40602020);
    D_00277198.w20 |= 0x840;
    D_00277198.b39 = 0;
    r0 = ((char *(*)(int))func_0956C0)(0);
    r1 = ((char *(*)(int))func_0956C0)(1);
    D_001AE404 = r1;
    func_110B48(0, D_001C7BC8, r0);
    func_0B32F0();
}
