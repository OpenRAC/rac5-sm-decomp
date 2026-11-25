/* LEVEL_09:0x0C0FD0 -- placement copy of LEVEL_16_0B31D8.c: placement copy of LEVEL_01_0C3D20.c: reads four shorts from a query buffer, configures a global object, and runs a follow-up. */
typedef struct Glob {
    char pad0[0x20];
    unsigned int w20;
    char pad1[0x39 - 0x24];
    unsigned char b39;
} Glob;

extern Glob D_003109D8;
extern char *D_001EA18C;
extern char D_001FCA88[];

extern void func_0AB9B8(int, void *, float);
extern int func_0A5930(void *);
extern int func_0A5960(void *);
extern int func_0A5990(void *);
extern int func_0A5A48(void *);
extern void func_0A8690(Glob *, short, short, short, short, unsigned int);
extern char *func_0A3690(int);
extern void func_12CD70(int, char *, char *);
extern void func_0C10E8(void);

void func_0C0FD0(void)
{
    int buf[4];
    char *r0;
    char *r1;
    func_0AB9B8(0x203, buf, 0.0f);
    func_0A8690(&D_003109D8, (short)func_0A5930(buf), (short)func_0A5960(buf),
                (short)func_0A5990(buf), (short)func_0A5A48(buf), 0x40602020);
    D_003109D8.w20 |= 0x840;
    D_003109D8.b39 = 0;
    r0 = func_0A3690(0);
    r1 = func_0A3690(1);
    D_001EA18C = r1;
    func_12CD70(0, D_001FCA88, r0);
    func_0C10E8();
}
