/* LEVEL_06:0x0BE620 -- placement copy of LEVEL_16_0B31D8.c: placement copy of LEVEL_01_0C3D20.c: reads four shorts from a query buffer, configures a global object, and runs a follow-up. */
typedef struct Glob {
    char pad0[0x20];
    unsigned int w20;
    char pad1[0x39 - 0x24];
    unsigned char b39;
} Glob;

extern Glob D_00315FD8;
extern char *D_001EF28C;
extern char D_00201D08[];

extern void func_0A8ED8(int, void *, float);
extern int func_0A2E50(void *);
extern int func_0A2E80(void *);
extern int func_0A2EB0(void *);
extern int func_0A2F68(void *);
extern void func_0A5BB0(Glob *, short, short, short, short, unsigned int);
extern char *func_0A0BB0(int);
extern void func_12A4A8(int, char *, char *);
extern void func_0BE738(void);

void func_0BE620(void)
{
    int buf[4];
    char *r0;
    char *r1;
    func_0A8ED8(0x203, buf, 0.0f);
    func_0A5BB0(&D_00315FD8, (short)func_0A2E50(buf), (short)func_0A2E80(buf),
                (short)func_0A2EB0(buf), (short)func_0A2F68(buf), 0x40602020);
    D_00315FD8.w20 |= 0x840;
    D_00315FD8.b39 = 0;
    r0 = func_0A0BB0(0);
    r1 = func_0A0BB0(1);
    D_001EF28C = r1;
    func_12A4A8(0, D_00201D08, r0);
    func_0BE738();
}
