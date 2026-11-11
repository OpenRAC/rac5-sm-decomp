/* LEVEL_18:0x0C4A88 -- placement copy of LEVEL_01_0D63B8.c: runs three timed lookups and forwards their results. */
struct R {
    short h00;
    char pad02[6];
    unsigned short h08;
    char pad0A[2];
    unsigned short h0C;
    char pad0E[2];
};

extern void func_09BE08(int, struct R *, float);
extern int func_095D20(struct R *);
extern int func_10DFE0(int);
extern void func_097E90(short, short, int);
extern void func_0A8488(char *);
extern void func_096FC0(short, short, int);
extern void func_0985A0(short, short, int);

extern char D_0027B408[];

void func_0C4A88(void)
{
    struct R r;
    short a;

    func_09BE08(0x218, &r, 0.0f);
    a = func_095D20(&r);
    func_097E90(a, r.h0C, func_10DFE0(0x24E));
    func_0A8488(D_0027B408);
    func_09BE08(0x2E9, &r, 0.0f);
    func_096FC0(r.h00, r.h0C, func_10DFE0(0x223));
    func_09BE08(0x2EB, &r, 0.0f);
    func_0985A0(r.h08, r.h0C, func_10DFE0(0x1CA));
}
