/* LEVEL_17:0x0C4FF0 -- placement copy of LEVEL_01_0D63B8.c: runs three timed lookups and forwards their results. */
struct R {
    short h00;
    char pad02[6];
    unsigned short h08;
    char pad0A[2];
    unsigned short h0C;
    char pad0E[2];
};

extern void func_09C2F0(int, struct R *, float);
extern int func_096208(struct R *);
extern int func_10E8A8(int);
extern void func_098378(short, short, int);
extern void func_0A89F0(char *);
extern void func_0974A8(short, short, int);
extern void func_098A88(short, short, int);

extern char D_0026C388[];

void func_0C4FF0(void)
{
    struct R r;
    short a;

    func_09C2F0(0x218, &r, 0.0f);
    a = func_096208(&r);
    func_098378(a, r.h0C, func_10E8A8(0x24E));
    func_0A89F0(D_0026C388);
    func_09C2F0(0x2E9, &r, 0.0f);
    func_0974A8(r.h00, r.h0C, func_10E8A8(0x223));
    func_09C2F0(0x2EB, &r, 0.0f);
    func_098A88(r.h08, r.h0C, func_10E8A8(0x1CA));
}
