/* LEVEL_16:0x13B988 -- sets two status bits in the owner, calls a helper, and calls a second helper when the flag is zero. */

struct E13B988 {
    char pad00[0x64];
    int f64;
};

extern void func_15D478(struct E13B988 *e, int x);
extern void func_186528(char *p, struct E13B988 *e);
extern char D_002E2D90[];

void func_13B988(struct E13B988 *e, int unused, int x, int flag)
{
    e->f64 = e->f64 | 0x200020;
    func_15D478(e, x);
    if (flag == 0) {
        func_186528(D_002E2D90, e);
    }
}
