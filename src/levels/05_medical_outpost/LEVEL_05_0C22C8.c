/* LEVEL_05:0x0C22C8 -- placement copy of LEVEL_16_0B31D8.c: placement copy of LEVEL_01_0C3D20.c: reads four shorts from a query buffer, configures a global object, and runs a follow-up. */
typedef struct Glob {
    char pad0[0x20];
    unsigned int w20;
    char pad1[0x39 - 0x24];
    unsigned char b39;
} Glob;

extern Glob D_00315118;
extern char *D_001EF70C;
extern char D_00201D88[];

extern void func_0ACCC8(int, void *, float);
extern int func_0A6C40(void *);
extern int func_0A6C70(void *);
extern int func_0A6CA0(void *);
extern int func_0A6D58(void *);
extern void func_0A99A0(Glob *, short, short, short, short, unsigned int);
extern char *func_0A49A0(int);
extern void func_12F750(int, char *, char *);
extern void func_0C23E0(void);

void func_0C22C8(void)
{
    int buf[4];
    char *r0;
    char *r1;
    func_0ACCC8(0x203, buf, 0.0f);
    func_0A99A0(&D_00315118, (short)func_0A6C40(buf), (short)func_0A6C70(buf),
                (short)func_0A6CA0(buf), (short)func_0A6D58(buf), 0x40602020);
    D_00315118.w20 |= 0x840;
    D_00315118.b39 = 0;
    r0 = func_0A49A0(0);
    r1 = func_0A49A0(1);
    D_001EF70C = r1;
    func_12F750(0, D_00201D88, r0);
    func_0C23E0();
}
