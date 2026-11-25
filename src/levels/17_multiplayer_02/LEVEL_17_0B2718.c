/* LEVEL_17:0x0B2718 -- placement copy of LEVEL_16_0B31D8.c: placement copy of LEVEL_01_0C3D20.c: reads four shorts from a query buffer, configures a global object, and runs a follow-up. */
typedef struct Glob {
    char pad0[0x20];
    unsigned int w20;
    char pad1[0x39 - 0x24];
    unsigned char b39;
} Glob;

extern Glob D_00268498;
extern char *D_001A1A04;
extern char D_001BB048[];

extern void func_09C2F0(int, void *, float);
extern int func_096208(void *);
extern int func_096238(void *);
extern int func_096268(void *);
extern int func_096320(void *);
extern void func_098FC8(Glob *, short, short, short, short, unsigned int);
extern int func_094BB8(void);
extern void func_1100C0(int, char *, char *);
extern void func_0B2830(void);

void func_0B2718(void)
{
    int buf[4];
    char *r0;
    char *r1;
    func_09C2F0(0x203, buf, 0.0f);
    func_098FC8(&D_00268498, (short)func_096208(buf), (short)func_096238(buf),
                (short)func_096268(buf), (short)func_096320(buf), 0x40602020);
    D_00268498.w20 |= 0x840;
    D_00268498.b39 = 0;
    r0 = ((char *(*)(int))func_094BB8)(0);
    r1 = ((char *(*)(int))func_094BB8)(1);
    D_001A1A04 = r1;
    func_1100C0(0, D_001BB048, r0);
    func_0B2830();
}
