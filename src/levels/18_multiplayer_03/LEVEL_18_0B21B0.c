/* LEVEL_18:0x0B21B0 -- placement copy of LEVEL_16_0B31D8.c: placement copy of LEVEL_01_0C3D20.c: reads four shorts from a query buffer, configures a global object, and runs a follow-up. */
typedef struct Glob {
    char pad0[0x20];
    unsigned int w20;
    char pad1[0x39 - 0x24];
    unsigned char b39;
} Glob;

extern Glob D_00277518;
extern char *D_001AF884;
extern char D_001C9148[];

extern void func_09BE08(int, void *, float);
extern int func_095D20(void *);
extern int func_095D50(void *);
extern int func_095D80(void *);
extern int func_095E38(void *);
extern void func_098AE0(Glob *, short, short, short, short, unsigned int);
extern int func_0946D0(void);
extern void func_10F7F8(int, char *, char *);
extern void func_0B22C8(void);

void func_0B21B0(void)
{
    int buf[4];
    char *r0;
    char *r1;
    func_09BE08(0x203, buf, 0.0f);
    func_098AE0(&D_00277518, (short)func_095D20(buf), (short)func_095D50(buf),
                (short)func_095D80(buf), (short)func_095E38(buf), 0x40602020);
    D_00277518.w20 |= 0x840;
    D_00277518.b39 = 0;
    r0 = ((char *(*)(int))func_0946D0)(0);
    r1 = ((char *(*)(int))func_0946D0)(1);
    D_001AF884 = r1;
    func_10F7F8(0, D_001C9148, r0);
    func_0B22C8();
}
