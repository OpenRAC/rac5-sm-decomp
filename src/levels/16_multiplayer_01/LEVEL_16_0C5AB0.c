/* LEVEL_16:0x0C5AB0 -- placement copy of LEVEL_01_0D63B8.c: runs three timed lookups and forwards their results. */
struct R {
    short h00;
    char pad02[6];
    unsigned short h08;
    char pad0A[2];
    unsigned short h0C;
    char pad0E[2];
};

extern void func_09CDF8(int, struct R *, float);
extern int func_096D10(struct R *);
extern int func_10F330(int);
extern void func_098E80(short, short, int);
extern void func_0A94B0(char *);
extern void func_097FB0(short, short, int);
extern void func_099590(short, short, int);

extern char D_0027B088[];

void func_0C5AB0(void)
{
    struct R r;
    short a;

    func_09CDF8(0x218, &r, 0.0f);
    a = func_096D10(&r);
    func_098E80(a, r.h0C, func_10F330(0x24E));
    func_0A94B0(D_0027B088);
    func_09CDF8(0x2E9, &r, 0.0f);
    func_097FB0(r.h00, r.h0C, func_10F330(0x223));
    func_09CDF8(0x2EB, &r, 0.0f);
    func_099590(r.h08, r.h0C, func_10F330(0x1CA));
}
