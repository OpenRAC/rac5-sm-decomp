/* LEVEL_04:0x0D5420 -- placement copy of LEVEL_01_0CFB88.c: steps a three-state controller and, in state one, advances it to state two after clamping a stored value. */

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

extern char D_003471A0[];
extern unsigned int D_0021DA68;
extern int D_0021C954;
extern struct Env0CFB88 *D_0020D12C;

int func_0DDCB8(int *set);
int func_0D4D98(void);
int func_0D4D78(struct Ctl0CFB88 *c);
void func_0D53F0(void);
int func_0D4D38(struct Ctl0CFB88 *c);
struct Ea0CFB88 *func_0242F0(int h, int k);
int func_0242A8(int x, int y);
void func_0D50A8(void);
void func_0D5230(void);

void func_0D5420(void)
{
    struct Ctl0CFB88 *c;
    struct Ea0CFB88 *x;
    struct Eb0CFB88 *y;
    int n;
    int m;

    c = (struct Ctl0CFB88 *)func_0DDCB8((int *)D_003471A0);
    switch (D_0021DA68) {
    case 0:
        func_0D4D98();
        break;
    case 1:
        if (c != 0) {
            if (func_0D4D78(c) != 0) {
                func_0D53F0();
            } else if (func_0D4D38(c) != 0) {
                x = func_0242F0(c->h_14, -1);
                y = (struct Eb0CFB88 *)func_0242A8(c->h_14, -1);
                if (x != 0 && y != 0) {
                    n = D_0020D12C->n_1C68 / c->d_0C;
                    m = x->v_38 - y->v_40;
                    if (m >= n) {
                        m = n;
                    }
                    D_0021C954 = m;
                }
                D_0021DA68 = 2;
            } else {
                func_0D50A8();
            }
        } else {
            D_0021DA68 = 0;
        }
        break;
    case 2:
        func_0D5230();
        break;
    }
}
