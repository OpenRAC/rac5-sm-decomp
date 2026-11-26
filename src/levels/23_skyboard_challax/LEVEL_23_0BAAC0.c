/* LEVEL_23:0x0BAAC0 -- placement copy of LEVEL_16_0B31D8.c: placement copy of LEVEL_01_0C3D20.c: reads four shorts from a query buffer, configures a global object, and runs a follow-up. */
typedef struct Glob {
    char pad0[0x20];
    unsigned int w20;
    char pad1[0x39 - 0x24];
    unsigned char b39;
} Glob;

extern Glob D_002FA698;
extern char *D_001D378C;
extern char D_001E6008[];

extern void func_0A5478(int, void *, float);
extern int func_09F3F0(void *);
extern int func_09F420(void *);
extern int func_09F450(void *);
extern int func_09F508(void *);
extern void func_0A2150(Glob *, short, short, short, short, unsigned int);
extern char *func_09D150(int);
extern void func_125550(int, char *, char *);
extern void func_0BABD8(void);

void func_0BAAC0(void)
{
    int buf[4];
    char *r0;
    char *r1;
    func_0A5478(0x203, buf, 0.0f);
    func_0A2150(&D_002FA698, (short)func_09F3F0(buf), (short)func_09F420(buf),
                (short)func_09F450(buf), (short)func_09F508(buf), 0x40602020);
    D_002FA698.w20 |= 0x840;
    D_002FA698.b39 = 0;
    r0 = func_09D150(0);
    r1 = func_09D150(1);
    D_001D378C = r1;
    func_125550(0, D_001E6008, r0);
    func_0BABD8();
}
