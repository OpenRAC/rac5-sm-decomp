/* LEVEL_01.REL:0x0CFB88: reviewed 304-byte candidate, held for ABI review.
 * Steps a three-state controller and, in state one, advances it to state two
 * after clamping a stored value.
 * pinned C with gnu-ee-trial links 304/304 bytes and is byte-exact at this and
 * 19 other USA placements, but the prototypes disagree.
 * It declares func_0D83F8 returning pointer with (pointer), but the accepted
 * LEVEL_01_0D83F8.c defines it returning int with (pointer).
 * It declares func_024628 returning pointer with (int, int), but the accepted
 * LEVEL_01_024628.c defines it returning int with (int, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct Ctl0CFB88 {
    char pad_00[0x0C];
    unsigned int d_0C;
    char pad_10[0x04];
    int h_14;
};
struct Ea0CFB88 {
    char pad_00[0x38];
    int v_38;
};
struct Eb0CFB88 {
    char pad_00[0x40];
    int v_40;
};
struct Env0CFB88 {
    char pad_00[0x1C68];
    unsigned int n_1C68;
};

extern char D_0032C9A0[];
extern unsigned int D_002045A8;
extern int D_00203494;
extern struct Env0CFB88 *D_001F3FAC;

struct Ctl0CFB88 *func_0D83F8(char *a);
void func_0CF500(void);
int func_0CF4E0(struct Ctl0CFB88 *c);
void func_0CFB58(void);
int func_0CF4A0(struct Ctl0CFB88 *c);
struct Ea0CFB88 *func_024670(int h, int k);
struct Eb0CFB88 *func_024628(int h, int k);
void func_0CF810(void);
void func_0CF998(void);

void func_0CFB88(void)
{
    struct Ctl0CFB88 *c;
    struct Ea0CFB88 *x;
    struct Eb0CFB88 *y;
    int n;
    int m;

    c = func_0D83F8(D_0032C9A0);
    switch (D_002045A8) {
    case 0:
        func_0CF500();
        break;
    case 1:
        if (c != 0) {
            if (func_0CF4E0(c) != 0) {
                func_0CFB58();
            } else if (func_0CF4A0(c) != 0) {
                x = func_024670(c->h_14, -1);
                y = func_024628(c->h_14, -1);
                if (x != 0 && y != 0) {
                    n = D_001F3FAC->n_1C68 / c->d_0C;
                    m = x->v_38 - y->v_40;
                    if (m >= n) {
                        m = n;
                    }
                    D_00203494 = m;
                }
                D_002045A8 = 2;
            } else {
                func_0CF810();
            }
        } else {
            D_002045A8 = 0;
        }
        break;
    case 2:
        func_0CF998();
        break;
    }
}
