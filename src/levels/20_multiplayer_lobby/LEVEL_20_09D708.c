/* LEVEL_20:0x09D708 -- placement copy of LEVEL_16_0B31D8.c: placement copy of LEVEL_01_0C3D20.c: reads four shorts from a query buffer, configures a global object, and runs a follow-up. */
typedef struct Glob {
    char pad0[0x20];
    unsigned int w20;
    char pad1[0x39 - 0x24];
    unsigned char b39;
} Glob;

extern Glob D_0019A9D8;
extern char *D_00110AE4;
extern char D_00128C48[];

extern void func_0874F0(int, void *, float);
extern int func_081408(void *);
extern int func_081438(void *);
extern int func_081468(void *);
extern int func_081520(void *);
extern void func_0841C8(Glob *, short, short, short, short, unsigned int);
extern int func_07FDB8(void);
extern void func_0E3930(int, char *, char *);
extern void func_09D820(void);

void func_09D708(void)
{
    int buf[4];
    char *r0;
    char *r1;
    func_0874F0(0x203, buf, 0.0f);
    func_0841C8(&D_0019A9D8, (short)func_081408(buf), (short)func_081438(buf),
                (short)func_081468(buf), (short)func_081520(buf), 0x40602020);
    D_0019A9D8.w20 |= 0x840;
    D_0019A9D8.b39 = 0;
    r0 = ((char *(*)(int))func_07FDB8)(0);
    r1 = ((char *(*)(int))func_07FDB8)(1);
    D_00110AE4 = r1;
    func_0E3930(0, D_00128C48, r0);
    func_09D820();
}
