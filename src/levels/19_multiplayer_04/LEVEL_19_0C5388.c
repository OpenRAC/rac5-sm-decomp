/* LEVEL_19:0x0C5388 -- placement copy of LEVEL_01_0D63B8.c: runs three timed lookups and forwards their results. */
struct R {
    short h00;
    char pad02[6];
    unsigned short h08;
    char pad0A[2];
    unsigned short h0C;
    char pad0E[2];
};

extern void func_09C688(int, struct R *, float);
extern int func_0965A0(struct R *);
extern int func_10F9D0(int);
extern void func_098710(short, short, int);
extern void func_0A8D88(char *);
extern void func_097840(short, short, int);
extern void func_098E20(short, short, int);

extern char D_0027B208[];

void func_0C5388(void)
{
    struct R r;
    short a;

    func_09C688(0x218, &r, 0.0f);
    a = func_0965A0(&r);
    func_098710(a, r.h0C, func_10F9D0(0x24E));
    func_0A8D88(D_0027B208);
    func_09C688(0x2E9, &r, 0.0f);
    func_097840(r.h00, r.h0C, func_10F9D0(0x223));
    func_09C688(0x2EB, &r, 0.0f);
    func_098E20(r.h08, r.h0C, func_10F9D0(0x1CA));
}
