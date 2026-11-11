/* LEVEL_05:0x0CE130 -- placement copy of LEVEL_01_0CFB88.c: steps a three-state controller and, in state one, advances it to state two after clamping a stored value. */

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

extern char D_00318860[];
extern unsigned int D_001F3928;
extern int D_001F2814;
extern struct Env0CFB88 *D_001E332C;

int func_0D69A0(int *set);
int func_0CDAA8(void);
int func_0CDA88(struct Ctl0CFB88 *c);
void func_0CE100(void);
int func_0CDA48(struct Ctl0CFB88 *c);
struct Ea0CFB88 *func_023608(int h, int k);
int func_0235C0(int x, int y);
void func_0CDDB8(void);
void func_0CDF40(void);

void func_0CE130(void)
{
    struct Ctl0CFB88 *c;
    struct Ea0CFB88 *x;
    struct Eb0CFB88 *y;
    int n;
    int m;

    c = (struct Ctl0CFB88 *)func_0D69A0((int *)D_00318860);
    switch (D_001F3928) {
    case 0:
        func_0CDAA8();
        break;
    case 1:
        if (c != 0) {
            if (func_0CDA88(c) != 0) {
                func_0CE100();
            } else if (func_0CDA48(c) != 0) {
                x = func_023608(c->h_14, -1);
                y = (struct Eb0CFB88 *)func_0235C0(c->h_14, -1);
                if (x != 0 && y != 0) {
                    n = D_001E332C->n_1C68 / c->d_0C;
                    m = x->v_38 - y->v_40;
                    if (m >= n) {
                        m = n;
                    }
                    D_001F2814 = m;
                }
                D_001F3928 = 2;
            } else {
                func_0CDDB8();
            }
        } else {
            D_001F3928 = 0;
        }
        break;
    case 2:
        func_0CDF40();
        break;
    }
}
