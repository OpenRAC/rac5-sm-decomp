/* LEVEL_22:0x0C48F8 -- placement copy of LEVEL_01_0D63B8.c: runs three timed lookups and forwards their results. */
struct R {
    short h00;
    char pad02[6];
    unsigned short h08;
    char pad0A[2];
    unsigned short h0C;
    char pad0E[2];
};

extern void func_09CD18(int, struct R *, float);
extern int func_096C90(struct R *);
extern int func_109980(int);
extern void func_098DA0(short, short, int);
extern void func_0A8908(char *);
extern void func_097ED0(short, short, int);
extern void func_0994B0(short, short, int);

extern char D_00282BC8[];

void func_0C48F8(void)
{
    struct R r;
    short a;

    func_09CD18(0x218, &r, 0.0f);
    a = func_096C90(&r);
    func_098DA0(a, r.h0C, func_109980(0x24E));
    func_0A8908(D_00282BC8);
    func_09CD18(0x2E9, &r, 0.0f);
    func_097ED0(r.h00, r.h0C, func_109980(0x223));
    func_09CD18(0x2EB, &r, 0.0f);
    func_0994B0(r.h08, r.h0C, func_109980(0x1CA));
}
