/* LEVEL_24:0x0BD5E8 -- placement copy of LEVEL_16_0B31D8.c: placement copy of LEVEL_01_0C3D20.c: reads four shorts from a query buffer, configures a global object, and runs a follow-up. */
typedef struct Glob {
    char pad0[0x20];
    unsigned int w20;
    char pad1[0x39 - 0x24];
    unsigned char b39;
} Glob;

extern Glob D_002F5118;
extern char *D_001D100C;
extern char D_001E3C08[];

extern void func_0A7F80(int, void *, float);
extern int func_0A1EF8(void *);
extern int func_0A1F28(void *);
extern int func_0A1F58(void *);
extern int func_0A2010(void *);
extern void func_0A4C58(Glob *, short, short, short, short, unsigned int);
extern char *func_09FC58(int);
extern void func_1298D8(int, char *, char *);
extern void func_0BD700(void);

void func_0BD5E8(void)
{
    int buf[4];
    char *r0;
    char *r1;
    func_0A7F80(0x203, buf, 0.0f);
    func_0A4C58(&D_002F5118, (short)func_0A1EF8(buf), (short)func_0A1F28(buf),
                (short)func_0A1F58(buf), (short)func_0A2010(buf), 0x40602020);
    D_002F5118.w20 |= 0x840;
    D_002F5118.b39 = 0;
    r0 = func_09FC58(0);
    r1 = func_09FC58(1);
    D_001D100C = r1;
    func_1298D8(0, D_001E3C08, r0);
    func_0BD700();
}
