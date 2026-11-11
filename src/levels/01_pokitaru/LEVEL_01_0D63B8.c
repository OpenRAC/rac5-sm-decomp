/* LEVEL_01:0x0D63B8 -- runs three timed lookups and forwards their results. */
struct R {
    short h00;
    char pad02[6];
    unsigned short h08;
    char pad0A[2];
    unsigned short h0C;
    char pad0E[2];
};

extern void func_0AE708(int, struct R *, float);
extern int func_0A8680(struct R *);
extern int func_1324B0(int);
extern void func_0AA790(short, short, int);
extern void func_0BA460(char *);
extern void func_0A98C0(short, short, int);
extern void func_0AAEA0(short, short, int);

extern char D_0032D008[];

void func_0D63B8(void)
{
    struct R r;
    short a;

    func_0AE708(0x218, &r, 0.0f);
    a = func_0A8680(&r);
    func_0AA790(a, r.h0C, func_1324B0(0x24E));
    func_0BA460(D_0032D008);
    func_0AE708(0x2E9, &r, 0.0f);
    func_0A98C0(r.h00, r.h0C, func_1324B0(0x223));
    func_0AE708(0x2EB, &r, 0.0f);
    func_0AAEA0(r.h08, r.h0C, func_1324B0(0x1CA));
}
