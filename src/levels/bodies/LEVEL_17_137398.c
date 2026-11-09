/* LEVEL_17:0x137398 -- placement copy of LEVEL_16_13B988.c: sets two status bits in the owner, calls a helper, and calls a second helper when the flag is zero. */

struct E13B988 {
    char pad00[0x64];
    int f64;
};

extern void func_1569F8(struct E13B988 *e, int x);
extern void func_179B70(char *p, struct E13B988 *e);
extern char D_002D3FA0[];

void func_137398(struct E13B988 *e, int unused, int x, int flag)
{
    e->f64 = e->f64 | 0x200020;
    func_1569F8(e, x);
    if (flag == 0) {
        func_179B70(D_002D3FA0, e);
    }
}
