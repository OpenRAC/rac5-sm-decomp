/* LEVEL_07:0x0D8418 -- placement copy of LEVEL_01_0D63B8.c: runs three timed lookups and forwards their results. */
struct R {
    short h00;
    char pad02[6];
    unsigned short h08;
    char pad0A[2];
    unsigned short h0C;
    char pad0E[2];
};

extern void func_0B0708(int, struct R *, float);
extern int func_0AA680(struct R *);
extern int func_1354B0(int);
extern void func_0AC790(short, short, int);
extern void func_0BC4C0(char *);
extern void func_0AB8C0(short, short, int);
extern void func_0ACEA0(short, short, int);

extern char D_00342908[];

void func_0D8418(void)
{
    struct R r;
    short a;

    func_0B0708(0x218, &r, 0.0f);
    a = func_0AA680(&r);
    func_0AC790(a, r.h0C, func_1354B0(0x24E));
    func_0BC4C0(D_00342908);
    func_0B0708(0x2E9, &r, 0.0f);
    func_0AB8C0(r.h00, r.h0C, func_1354B0(0x223));
    func_0B0708(0x2EB, &r, 0.0f);
    func_0ACEA0(r.h08, r.h0C, func_1354B0(0x1CA));
}
