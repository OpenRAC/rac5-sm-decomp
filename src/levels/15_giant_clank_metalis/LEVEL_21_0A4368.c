/* LEVEL_21:0x0A4368 -- placement copy of LEVEL_16_0B31D8.c: placement copy of LEVEL_01_0C3D20.c: reads four shorts from a query buffer, configures a global object, and runs a follow-up. */
typedef struct Glob {
    char pad0[0x20];
    unsigned int w20;
    char pad1[0x39 - 0x24];
    unsigned char b39;
} Glob;

extern Glob D_00240A98;
extern char *D_0015500C;
extern char D_00167608[];

extern void func_08EFD0(int, void *, float);
extern int func_088F48(void *);
extern int func_088F78(void *);
extern int func_088FA8(void *);
extern int func_089060(void *);
extern void func_08BCA8(Glob *, short, short, short, short, unsigned int);
extern char *func_086CA8(int);
extern void func_0F2CA0(int, char *, char *);
extern void func_0A4480(void);

void func_0A4368(void)
{
    int buf[4];
    char *r0;
    char *r1;
    func_08EFD0(0x203, buf, 0.0f);
    func_08BCA8(&D_00240A98, (short)func_088F48(buf), (short)func_088F78(buf),
                (short)func_088FA8(buf), (short)func_089060(buf), 0x40602020);
    D_00240A98.w20 |= 0x840;
    D_00240A98.b39 = 0;
    r0 = func_086CA8(0);
    r1 = func_086CA8(1);
    D_0015500C = r1;
    func_0F2CA0(0, D_00167608, r0);
    func_0A4480();
}
