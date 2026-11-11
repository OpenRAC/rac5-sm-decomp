/* LEVEL_04:0x0DBC60 -- placement copy of LEVEL_01_0D63B8.c: runs three timed lookups and forwards their results. */
struct R {
    short h00;
    char pad02[6];
    unsigned short h08;
    char pad0A[2];
    unsigned short h0C;
    char pad0E[2];
};

extern void func_0B3958(int, struct R *, float);
extern int func_0AD890(struct R *);
extern int func_13E930(int);
extern void func_0AF9E0(short, short, int);
extern void func_0BFC40(char *);
extern void func_0AEB10(short, short, int);
extern void func_0B00F0(short, short, int);

extern char D_00347808[];

void func_0DBC60(void)
{
    struct R r;
    short a;

    func_0B3958(0x218, &r, 0.0f);
    a = func_0AD890(&r);
    func_0AF9E0(a, r.h0C, func_13E930(0x24E));
    func_0BFC40(D_00347808);
    func_0B3958(0x2E9, &r, 0.0f);
    func_0AEB10(r.h00, r.h0C, func_13E930(0x223));
    func_0B3958(0x2EB, &r, 0.0f);
    func_0B00F0(r.h08, r.h0C, func_13E930(0x1CA));
}
