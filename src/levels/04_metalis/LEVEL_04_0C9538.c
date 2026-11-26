/* LEVEL_04:0x0C9538 -- placement copy of LEVEL_16_0B31D8.c: placement copy of LEVEL_01_0C3D20.c: reads four shorts from a query buffer, configures a global object, and runs a follow-up. */
typedef struct Glob {
    char pad0[0x20];
    unsigned int w20;
    char pad1[0x39 - 0x24];
    unsigned char b39;
} Glob;

extern Glob D_00343A58;
extern char *D_0021984C;
extern char D_0022C808[];

extern void func_0B3958(int, void *, float);
extern int func_0AD890(void *);
extern int func_0AD8C0(void *);
extern int func_0AD8F0(void *);
extern int func_0AD9A8(void *);
extern void func_0B0630(Glob *, short, short, short, short, unsigned int);
extern char *func_0AB5F0(int);
extern void func_140258(int, char *, char *);
extern void func_0C9650(void);

void func_0C9538(void)
{
    int buf[4];
    char *r0;
    char *r1;
    func_0B3958(0x203, buf, 0.0f);
    func_0B0630(&D_00343A58, (short)func_0AD890(buf), (short)func_0AD8C0(buf),
                (short)func_0AD8F0(buf), (short)func_0AD9A8(buf), 0x40602020);
    D_00343A58.w20 |= 0x840;
    D_00343A58.b39 = 0;
    r0 = func_0AB5F0(0);
    r1 = func_0AB5F0(1);
    D_0021984C = r1;
    func_140258(0, D_0022C808, r0);
    func_0C9650();
}
