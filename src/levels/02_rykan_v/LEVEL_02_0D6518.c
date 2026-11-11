/* LEVEL_02:0x0D6518 -- placement copy of LEVEL_01_0CFB88.c: steps a three-state controller and, in state one, advances it to state two after clamping a stored value. */

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

extern char D_00343EA0[];
extern unsigned int D_00219568;
extern int D_00218454;
extern struct Env0CFB88 *D_00208C2C;

int func_0DED88(int *set);
int func_0D5E90(void);
int func_0D5E70(struct Ctl0CFB88 *c);
void func_0D64E8(void);
int func_0D5E30(struct Ctl0CFB88 *c);
struct Ea0CFB88 *func_024FD0(int h, int k);
int func_024F88(int x, int y);
void func_0D61A0(void);
void func_0D6328(void);

void func_0D6518(void)
{
    struct Ctl0CFB88 *c;
    struct Ea0CFB88 *x;
    struct Eb0CFB88 *y;
    int n;
    int m;

    c = (struct Ctl0CFB88 *)func_0DED88((int *)D_00343EA0);
    switch (D_00219568) {
    case 0:
        func_0D5E90();
        break;
    case 1:
        if (c != 0) {
            if (func_0D5E70(c) != 0) {
                func_0D64E8();
            } else if (func_0D5E30(c) != 0) {
                x = func_024FD0(c->h_14, -1);
                y = (struct Eb0CFB88 *)func_024F88(c->h_14, -1);
                if (x != 0 && y != 0) {
                    n = D_00208C2C->n_1C68 / c->d_0C;
                    m = x->v_38 - y->v_40;
                    if (m >= n) {
                        m = n;
                    }
                    D_00218454 = m;
                }
                D_00219568 = 2;
            } else {
                func_0D61A0();
            }
        } else {
            D_00219568 = 0;
        }
        break;
    case 2:
        func_0D6328();
        break;
    }
}
