/* LEVEL_22:0x0B21D0 -- placement copy of LEVEL_16_0B31D8.c: placement copy of LEVEL_01_0C3D20.c: reads four shorts from a query buffer, configures a global object, and runs a follow-up. */
typedef struct Glob {
    char pad0[0x20];
    unsigned int w20;
    char pad1[0x39 - 0x24];
    unsigned char b39;
} Glob;

extern Glob D_0027EE18;
extern char *D_0015F70C;
extern char D_00170308[];

extern void func_09CD18(int, void *, float);
extern int func_096C90(void *);
extern int func_096CC0(void *);
extern int func_096CF0(void *);
extern int func_096DA8(void *);
extern void func_0999F0(Glob *, short, short, short, short, unsigned int);
extern char *func_0949F0(int);
extern void func_10B2A8(int, char *, char *);
extern void func_0B22E8(void);

void func_0B21D0(void)
{
    int buf[4];
    char *r0;
    char *r1;
    func_09CD18(0x203, buf, 0.0f);
    func_0999F0(&D_0027EE18, (short)func_096C90(buf), (short)func_096CC0(buf),
                (short)func_096CF0(buf), (short)func_096DA8(buf), 0x40602020);
    D_0027EE18.w20 |= 0x840;
    D_0027EE18.b39 = 0;
    r0 = func_0949F0(0);
    r1 = func_0949F0(1);
    D_0015F70C = r1;
    func_10B2A8(0, D_00170308, r0);
    func_0B22E8();
}
