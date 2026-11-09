/* LEVEL_05:0x0D4960 -- placement copy of LEVEL_01_0D63B8.c: runs three timed lookups and forwards their results. */
struct R {
    short h00;
    char pad02[6];
    unsigned short h08;
    char pad0A[2];
    unsigned short h0C;
    char pad0E[2];
};

extern void func_0ACCC8(int, struct R *, float);
extern int func_0A6C40(struct R *);
extern int func_12DE28(int);
extern void func_0A8D50(short, short, int);
extern void func_0B8A08(char *);
extern void func_0A7E80(short, short, int);
extern void func_0A9460(short, short, int);

extern char D_00318EC8[];

void func_0D4960(void)
{
    struct R r;
    short a;

    func_0ACCC8(0x218, &r, 0.0f);
    a = func_0A6C40(&r);
    func_0A8D50(a, r.h0C, func_12DE28(0x24E));
    func_0B8A08(D_00318EC8);
    func_0ACCC8(0x2E9, &r, 0.0f);
    func_0A7E80(r.h00, r.h0C, func_12DE28(0x223));
    func_0ACCC8(0x2EB, &r, 0.0f);
    func_0A9460(r.h08, r.h0C, func_12DE28(0x1CA));
}
