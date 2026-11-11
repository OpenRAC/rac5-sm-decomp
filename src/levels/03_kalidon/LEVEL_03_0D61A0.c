/* LEVEL_03:0x0D61A0 -- placement copy of LEVEL_01_0D63B8.c: runs three timed lookups and forwards their results. */
struct R {
    short h00;
    char pad02[6];
    unsigned short h08;
    char pad0A[2];
    unsigned short h0C;
    char pad0E[2];
};

extern void func_0AE488(int, struct R *, float);
extern int func_0A8400(struct R *);
extern int func_130878(int);
extern void func_0AA510(short, short, int);
extern void func_0BA248(char *);
extern void func_0A9640(short, short, int);
extern void func_0AAC20(short, short, int);

extern char D_00347E88[];

void func_0D61A0(void)
{
    struct R r;
    short a;

    func_0AE488(0x218, &r, 0.0f);
    a = func_0A8400(&r);
    func_0AA510(a, r.h0C, func_130878(0x24E));
    func_0BA248(D_00347E88);
    func_0AE488(0x2E9, &r, 0.0f);
    func_0A9640(r.h00, r.h0C, func_130878(0x223));
    func_0AE488(0x2EB, &r, 0.0f);
    func_0AAC20(r.h08, r.h0C, func_130878(0x1CA));
}
