/* LEVEL_09:0x0D3668 -- placement copy of LEVEL_01_0D63B8.c: runs three timed lookups and forwards their results. */
struct R {
    short h00;
    char pad02[6];
    unsigned short h08;
    char pad0A[2];
    unsigned short h0C;
    char pad0E[2];
};

extern void func_0AB9B8(int, struct R *, float);
extern int func_0A5930(struct R *);
extern int func_12B448(int);
extern void func_0A7A40(short, short, int);
extern void func_0B7710(char *);
extern void func_0A6B70(short, short, int);
extern void func_0A8150(short, short, int);

extern char D_00314788[];

void func_0D3668(void)
{
    struct R r;
    short a;

    func_0AB9B8(0x218, &r, 0.0f);
    a = func_0A5930(&r);
    func_0A7A40(a, r.h0C, func_12B448(0x24E));
    func_0B7710(D_00314788);
    func_0AB9B8(0x2E9, &r, 0.0f);
    func_0A6B70(r.h00, r.h0C, func_12B448(0x223));
    func_0AB9B8(0x2EB, &r, 0.0f);
    func_0A8150(r.h08, r.h0C, func_12B448(0x1CA));
}
