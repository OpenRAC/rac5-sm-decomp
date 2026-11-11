/* LEVEL_24:0x0CFD08 -- placement copy of LEVEL_01_0D63B8.c: runs three timed lookups and forwards their results. */
struct R {
    short h00;
    char pad02[6];
    unsigned short h08;
    char pad0A[2];
    unsigned short h0C;
    char pad0E[2];
};

extern void func_0A7F80(int, struct R *, float);
extern int func_0A1EF8(struct R *);
extern int func_127FB0(int);
extern void func_0A4008(short, short, int);
extern void func_0B3CF0(char *);
extern void func_0A3138(short, short, int);
extern void func_0A4718(short, short, int);

extern char D_002F8EC8[];

void func_0CFD08(void)
{
    struct R r;
    short a;

    func_0A7F80(0x218, &r, 0.0f);
    a = func_0A1EF8(&r);
    func_0A4008(a, r.h0C, func_127FB0(0x24E));
    func_0B3CF0(D_002F8EC8);
    func_0A7F80(0x2E9, &r, 0.0f);
    func_0A3138(r.h00, r.h0C, func_127FB0(0x223));
    func_0A7F80(0x2EB, &r, 0.0f);
    func_0A4718(r.h08, r.h0C, func_127FB0(0x1CA));
}
