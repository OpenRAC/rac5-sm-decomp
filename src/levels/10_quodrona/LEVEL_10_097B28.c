/* LEVEL_10:0x097B28 -- placement copy of LEVEL_03_0973E8.c: calls a helper for one slot, then links that slot into a list when the list head is empty. */

struct N0973E8 {
    int f0;
    struct N0973E8 *f4;
    struct N0973E8 *f8;
    struct N0973E8 *fC;
    unsigned short f10;
    unsigned short f12;
    int f14;
};

extern char D_002A16CC[];
extern char *func_097610(char *a0, struct N0973E8 *a1, char *a2, int a3);

char *func_097B28(char *a0, struct N0973E8 *a1, int a2)
{
    struct N0973E8 *s0;
    char *s1;
    char *node;
    char *r;

    s0 = a1;
    s1 = D_002A16CC + s0->f10 * 40;
    r = func_097610(a0, s0, s1, a2);
    if (s0->f4 != s0) {
        if (s0->f8 == s0) {
            node = s1 + 0x10;
            if ((char *)s0->f8 != node) {
                s0->fC = (struct N0973E8 *)node;
                s0->f8 = ((struct N0973E8 *)node)->f8;
                ((struct N0973E8 *)(((struct N0973E8 *)node)->f8))->fC = s0;
                ((struct N0973E8 *)node)->f8 = s0;
            }
        }
    }
    return r;
}
