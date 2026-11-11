/* LEVEL_20:0x0AFFE0 -- placement copy of LEVEL_01_0D63B8.c: runs three timed lookups and forwards their results. */
struct R {
    short h00;
    char pad02[6];
    unsigned short h08;
    char pad0A[2];
    unsigned short h0C;
    char pad0E[2];
};

extern void func_0874F0(int, struct R *, float);
extern int func_081408(struct R *);
extern int func_0E2118(int);
extern void func_083578(short, short, int);
extern void func_0939E0(char *);
extern void func_0826A8(short, short, int);
extern void func_083C88(short, short, int);

extern char D_0019E8C8[];

void func_0AFFE0(void)
{
    struct R r;
    short a;

    func_0874F0(0x218, &r, 0.0f);
    a = func_081408(&r);
    func_083578(a, r.h0C, func_0E2118(0x24E));
    func_0939E0(D_0019E8C8);
    func_0874F0(0x2E9, &r, 0.0f);
    func_0826A8(r.h00, r.h0C, func_0E2118(0x223));
    func_0874F0(0x2EB, &r, 0.0f);
    func_083C88(r.h08, r.h0C, func_0E2118(0x1CA));
}
