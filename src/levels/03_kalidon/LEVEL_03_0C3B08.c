/* LEVEL_03:0x0C3B08 -- placement copy of LEVEL_16_0B31D8.c: placement copy of LEVEL_01_0C3D20.c: reads four shorts from a query buffer, configures a global object, and runs a follow-up. */
typedef struct Glob {
    char pad0[0x20];
    unsigned int w20;
    char pad1[0x39 - 0x24];
    unsigned char b39;
} Glob;

extern Glob D_003440D8;
extern char *D_00218A0C;
extern char D_0022BD88[];

extern void func_0AE488(int, void *, float);
extern int func_0A8400(void *);
extern int func_0A8430(void *);
extern int func_0A8460(void *);
extern int func_0A8518(void *);
extern void func_0AB160(Glob *, short, short, short, short, unsigned int);
extern char *func_0A6160(int);
extern void func_1321A0(int, char *, char *);
extern void func_0C3C20(void);

void func_0C3B08(void)
{
    int buf[4];
    char *r0;
    char *r1;
    func_0AE488(0x203, buf, 0.0f);
    func_0AB160(&D_003440D8, (short)func_0A8400(buf), (short)func_0A8430(buf),
                (short)func_0A8460(buf), (short)func_0A8518(buf), 0x40602020);
    D_003440D8.w20 |= 0x840;
    D_003440D8.b39 = 0;
    r0 = func_0A6160(0);
    r1 = func_0A6160(1);
    D_00218A0C = r1;
    func_1321A0(0, D_0022BD88, r0);
    func_0C3C20();
}
