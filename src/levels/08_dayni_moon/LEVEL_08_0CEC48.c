/* LEVEL_08:0x0CEC48 -- placement copy of LEVEL_16_0B31D8.c: placement copy of LEVEL_01_0C3D20.c: reads four shorts from a query buffer, configures a global object, and runs a follow-up. */
typedef struct Glob {
    char pad0[0x20];
    unsigned int w20;
    char pad1[0x39 - 0x24];
    unsigned char b39;
} Glob;

extern Glob D_003784D8;
extern char *D_0024924C;
extern char D_0025CB08[];

extern void func_0B9040(int, void *, float);
extern int func_0B2F78(void *);
extern int func_0B2FA8(void *);
extern int func_0B2FD8(void *);
extern int func_0B3090(void *);
extern void func_0B5D18(Glob *, short, short, short, short, unsigned int);
extern char *func_0B0CD8(int);
extern void func_145310(int, char *, char *);
extern void func_0CED60(void);

void func_0CEC48(void)
{
    int buf[4];
    char *r0;
    char *r1;
    func_0B9040(0x203, buf, 0.0f);
    func_0B5D18(&D_003784D8, (short)func_0B2F78(buf), (short)func_0B2FA8(buf),
                (short)func_0B2FD8(buf), (short)func_0B3090(buf), 0x40602020);
    D_003784D8.w20 |= 0x840;
    D_003784D8.b39 = 0;
    r0 = func_0B0CD8(0);
    r1 = func_0B0CD8(1);
    D_0024924C = r1;
    func_145310(0, D_0025CB08, r0);
    func_0CED60();
}
