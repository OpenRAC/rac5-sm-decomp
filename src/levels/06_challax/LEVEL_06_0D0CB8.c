/* LEVEL_06:0x0D0CB8 -- placement copy of LEVEL_01_0D63B8.c: runs three timed lookups and forwards their results. */
struct R {
    short h00;
    char pad02[6];
    unsigned short h08;
    char pad0A[2];
    unsigned short h0C;
    char pad0E[2];
};

extern void func_0A8ED8(int, struct R *, float);
extern int func_0A2E50(struct R *);
extern int func_128B80(int);
extern void func_0A4F60(short, short, int);
extern void func_0B4D60(char *);
extern void func_0A4090(short, short, int);
extern void func_0A5670(short, short, int);

extern char D_00319D88[];

void func_0D0CB8(void)
{
    struct R r;
    short a;

    func_0A8ED8(0x218, &r, 0.0f);
    a = func_0A2E50(&r);
    func_0A4F60(a, r.h0C, func_128B80(0x24E));
    func_0B4D60(D_00319D88);
    func_0A8ED8(0x2E9, &r, 0.0f);
    func_0A4090(r.h00, r.h0C, func_128B80(0x223));
    func_0A8ED8(0x2EB, &r, 0.0f);
    func_0A5670(r.h08, r.h0C, func_128B80(0x1CA));
}
