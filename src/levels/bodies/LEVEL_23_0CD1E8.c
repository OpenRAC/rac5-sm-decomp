/* LEVEL_23:0x0CD1E8 -- placement copy of LEVEL_01_0D63B8.c: runs three timed lookups and forwards their results. */
struct R {
    short h00;
    char pad02[6];
    unsigned short h08;
    char pad0A[2];
    unsigned short h0C;
    char pad0E[2];
};

extern void func_0A5478(int, struct R *, float);
extern int func_09F3F0(struct R *);
extern int func_123C28(int);
extern void func_0A1500(short, short, int);
extern void func_0B11F8(char *);
extern void func_0A0630(short, short, int);
extern void func_0A1C10(short, short, int);

extern char D_002FE448[];

void func_0CD1E8(void)
{
    struct R r;
    short a;

    func_0A5478(0x218, &r, 0.0f);
    a = func_09F3F0(&r);
    func_0A1500(a, r.h0C, func_123C28(0x24E));
    func_0B11F8(D_002FE448);
    func_0A5478(0x2E9, &r, 0.0f);
    func_0A0630(r.h00, r.h0C, func_123C28(0x223));
    func_0A5478(0x2EB, &r, 0.0f);
    func_0A1C10(r.h08, r.h0C, func_123C28(0x1CA));
}
