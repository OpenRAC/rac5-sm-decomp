/* LEVEL_10:0x0D77F8 -- placement copy of LEVEL_01_0D63B8.c: runs three timed lookups and forwards their results. */
struct R {
    short h00;
    char pad02[6];
    unsigned short h08;
    char pad0A[2];
    unsigned short h0C;
    char pad0E[2];
};

extern void func_0AF820(int, struct R *, float);
extern int func_0A9798(struct R *);
extern int func_130310(int);
extern void func_0AB8A8(short, short, int);
extern void func_0BB7A8(char *);
extern void func_0AA9D8(short, short, int);
extern void func_0ABFB8(short, short, int);

extern char D_00336408[];

void func_0D77F8(void)
{
    struct R r;
    short a;

    func_0AF820(0x218, &r, 0.0f);
    a = func_0A9798(&r);
    func_0AB8A8(a, r.h0C, func_130310(0x24E));
    func_0BB7A8(D_00336408);
    func_0AF820(0x2E9, &r, 0.0f);
    func_0AA9D8(r.h00, r.h0C, func_130310(0x223));
    func_0AF820(0x2EB, &r, 0.0f);
    func_0ABFB8(r.h08, r.h0C, func_130310(0x1CA));
}
