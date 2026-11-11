/* LEVEL_15:0x0B69F8 -- placement copy of LEVEL_01_0D63B8.c: runs three timed lookups and forwards their results. */
struct R {
    short h00;
    char pad02[6];
    unsigned short h08;
    char pad0A[2];
    unsigned short h0C;
    char pad0E[2];
};

extern void func_08EFD0(int, struct R *, float);
extern int func_088F48(struct R *);
extern int func_0F1378(int);
extern void func_08B058(short, short, int);
extern void func_09AAA8(char *);
extern void func_08A188(short, short, int);
extern void func_08B768(short, short, int);

extern char D_00244848[];

void func_0B69F8(void)
{
    struct R r;
    short a;

    func_08EFD0(0x218, &r, 0.0f);
    a = func_088F48(&r);
    func_08B058(a, r.h0C, func_0F1378(0x24E));
    func_09AAA8(D_00244848);
    func_08EFD0(0x2E9, &r, 0.0f);
    func_08A188(r.h00, r.h0C, func_0F1378(0x223));
    func_08EFD0(0x2EB, &r, 0.0f);
    func_08B768(r.h08, r.h0C, func_0F1378(0x1CA));
}
