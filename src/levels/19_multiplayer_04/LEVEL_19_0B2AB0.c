/* LEVEL_19:0x0B2AB0 -- placement copy of LEVEL_16_0B31D8.c: placement copy of LEVEL_01_0C3D20.c: reads four shorts from a query buffer, configures a global object, and runs a follow-up. */
typedef struct Glob {
    char pad0[0x20];
    unsigned int w20;
    char pad1[0x39 - 0x24];
    unsigned char b39;
} Glob;

extern Glob D_00277318;
extern char *D_001AF584;
extern char D_001C8DC8[];

extern void func_09C688(int, void *, float);
extern int func_0965A0(void *);
extern int func_0965D0(void *);
extern int func_096600(void *);
extern int func_0966B8(void *);
extern void func_099360(Glob *, short, short, short, short, unsigned int);
extern int func_094F50(void);
extern void func_1111E8(int, char *, char *);
extern void func_0B2BC8(void);

void func_0B2AB0(void)
{
    int buf[4];
    char *r0;
    char *r1;
    func_09C688(0x203, buf, 0.0f);
    func_099360(&D_00277318, (short)func_0965A0(buf), (short)func_0965D0(buf),
                (short)func_096600(buf), (short)func_0966B8(buf), 0x40602020);
    D_00277318.w20 |= 0x840;
    D_00277318.b39 = 0;
    r0 = ((char *(*)(int))func_094F50)(0);
    r1 = ((char *(*)(int))func_094F50)(1);
    D_001AF584 = r1;
    func_1111E8(0, D_001C8DC8, r0);
    func_0B2BC8();
}
