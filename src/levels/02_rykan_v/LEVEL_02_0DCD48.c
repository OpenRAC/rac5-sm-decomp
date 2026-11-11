/* LEVEL_02:0x0DCD48 -- placement copy of LEVEL_01_0D63B8.c: runs three timed lookups and forwards their results. */
struct R {
    short h00;
    char pad02[6];
    unsigned short h08;
    char pad0A[2];
    unsigned short h0C;
    char pad0E[2];
};

extern void func_0B5018(int, struct R *, float);
extern int func_0AEF90(struct R *);
extern int func_138860(int);
extern void func_0B10A0(short, short, int);
extern void func_0C0D70(char *);
extern void func_0B01D0(short, short, int);
extern void func_0B17B0(short, short, int);

extern char D_00344508[];

void func_0DCD48(void)
{
    struct R r;
    short a;

    func_0B5018(0x218, &r, 0.0f);
    a = func_0AEF90(&r);
    func_0B10A0(a, r.h0C, func_138860(0x24E));
    func_0C0D70(D_00344508);
    func_0B5018(0x2E9, &r, 0.0f);
    func_0B01D0(r.h00, r.h0C, func_138860(0x223));
    func_0B5018(0x2EB, &r, 0.0f);
    func_0B17B0(r.h08, r.h0C, func_138860(0x1CA));
}
