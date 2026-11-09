/* LEVEL_01:0x0CFB88 -- steps a three-state controller and, in state one, advances it to state two after clamping a stored value. */

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

int func_0D83F8(int *set);
int func_0CF500(void);
int func_0CF4E0(struct Ctl0CFB88 *c);
void func_0CFB58(void);
int func_0CF4A0(struct Ctl0CFB88 *c);
struct Ea0CFB88 *func_024670(int h, int k);
int func_024628(int x, int y);
void func_0CF810(void);
void func_0CF998(void);

void func_0CFB88(void)
{
    struct Ctl0CFB88 *c;
    struct Ea0CFB88 *x;
    struct Eb0CFB88 *y;
    int n;
    int m;

    c = (struct Ctl0CFB88 *)func_0D83F8((int *)D_0032C9A0);
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
                y = (struct Eb0CFB88 *)func_024628(c->h_14, -1);
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
