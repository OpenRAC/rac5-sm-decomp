/* LEVEL_21:0x000300 -- placement copy of LEVEL_01_000300.c: forwards one 20-byte record field to a helper and repeats the call under a limit. */

struct Rec20 {
    int f00;
    int f04;
    int f08;
    void *f0C;
    int f10;
};

extern struct Rec20 D_0015FC80[];
extern void func_000360(void *a0, int a1);

void func_000300(int i)
{
    struct Rec20 *r;

    r = &D_0015FC80[i];
    func_000360(r->f0C, r->f04);
    if (r->f08 < 6) {
        func_000360(r->f0C, r->f08);
    }
}
