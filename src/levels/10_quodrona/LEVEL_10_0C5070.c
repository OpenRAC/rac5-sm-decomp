/* LEVEL_10:0x0C5070 -- placement copy of LEVEL_16_0B31D8.c: placement copy of LEVEL_01_0C3D20.c: reads four shorts from a query buffer, configures a global object, and runs a follow-up. */
typedef struct Glob {
    char pad0[0x20];
    unsigned int w20;
    char pad1[0x39 - 0x24];
    unsigned char b39;
} Glob;

extern Glob D_00332658;
extern char *D_0020938C;
extern char D_0021BE08[];

extern void func_0AF820(int, void *, float);
extern int func_0A9798(void *);
extern int func_0A97C8(void *);
extern int func_0A97F8(void *);
extern int func_0A98B0(void *);
extern void func_0AC4F8(Glob *, short, short, short, short, unsigned int);
extern char *func_0A74F8(int);
extern void func_131C58(int, char *, char *);
extern void func_0C5188(void);

void func_0C5070(void)
{
    int buf[4];
    char *r0;
    char *r1;
    func_0AF820(0x203, buf, 0.0f);
    func_0AC4F8(&D_00332658, (short)func_0A9798(buf), (short)func_0A97C8(buf),
                (short)func_0A97F8(buf), (short)func_0A98B0(buf), 0x40602020);
    D_00332658.w20 |= 0x840;
    D_00332658.b39 = 0;
    r0 = func_0A74F8(0);
    r1 = func_0A74F8(1);
    D_0020938C = r1;
    func_131C58(0, D_0021BE08, r0);
    func_0C5188();
}
