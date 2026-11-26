/* LEVEL_02:0x0CA630 -- placement copy of LEVEL_16_0B31D8.c: placement copy of LEVEL_01_0C3D20.c: reads four shorts from a query buffer, configures a global object, and runs a follow-up. */
typedef struct Glob {
    char pad0[0x20];
    unsigned int w20;
    char pad1[0x39 - 0x24];
    unsigned char b39;
} Glob;

extern Glob D_00340758;
extern char *D_0021534C;
extern char D_00227E08[];

extern void func_0B5018(int, void *, float);
extern int func_0AEF90(void *);
extern int func_0AEFC0(void *);
extern int func_0AEFF0(void *);
extern int func_0AF0A8(void *);
extern void func_0B1CF0(Glob *, short, short, short, short, unsigned int);
extern char *func_0ACCF0(int);
extern void func_13A188(int, char *, char *);
extern void func_0CA748(void);

void func_0CA630(void)
{
    int buf[4];
    char *r0;
    char *r1;
    func_0B5018(0x203, buf, 0.0f);
    func_0B1CF0(&D_00340758, (short)func_0AEF90(buf), (short)func_0AEFC0(buf),
                (short)func_0AEFF0(buf), (short)func_0AF0A8(buf), 0x40602020);
    D_00340758.w20 |= 0x840;
    D_00340758.b39 = 0;
    r0 = func_0ACCF0(0);
    r1 = func_0ACCF0(1);
    D_0021534C = r1;
    func_13A188(0, D_00227E08, r0);
    func_0CA748();
}
