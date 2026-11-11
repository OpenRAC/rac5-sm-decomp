/* LEVEL_08:0x0E1370 -- placement copy of LEVEL_01_0D63B8.c: runs three timed lookups and forwards their results. */
struct R {
    short h00;
    char pad02[6];
    unsigned short h08;
    char pad0A[2];
    unsigned short h0C;
    char pad0E[2];
};

extern void func_0B9040(int, struct R *, float);
extern int func_0B2F78(struct R *);
extern int func_1439E8(int);
extern void func_0B50C8(short, short, int);
extern void func_0C5350(char *);
extern void func_0B41F8(short, short, int);
extern void func_0B57D8(short, short, int);

extern char D_0037C288[];

void func_0E1370(void)
{
    struct R r;
    short a;

    func_0B9040(0x218, &r, 0.0f);
    a = func_0B2F78(&r);
    func_0B50C8(a, r.h0C, func_1439E8(0x24E));
    func_0C5350(D_0037C288);
    func_0B9040(0x2E9, &r, 0.0f);
    func_0B41F8(r.h00, r.h0C, func_1439E8(0x223));
    func_0B9040(0x2EB, &r, 0.0f);
    func_0B57D8(r.h08, r.h0C, func_1439E8(0x1CA));
}
