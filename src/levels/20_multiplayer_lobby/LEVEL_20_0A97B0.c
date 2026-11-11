/* LEVEL_20:0x0A97B0 -- placement copy of LEVEL_01_0CFB88.c: steps a three-state controller and, in state one, advances it to state two after clamping a stored value. */

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

extern char D_0019E260[];
extern unsigned int D_00114B38;
extern int D_00113A24;
extern struct Env0CFB88 *D_00104194;

int func_0B2020(int *set);
int func_0A9128(void);
int func_0A9108(struct Ctl0CFB88 *c);
void func_0A9780(void);
int func_0A90C8(struct Ctl0CFB88 *c);
struct Ea0CFB88 *func_01EE10(int h, int k);
int func_01EDC8(int x, int y);
void func_0A9438(void);
void func_0A95C0(void);

void func_0A97B0(void)
{
    struct Ctl0CFB88 *c;
    struct Ea0CFB88 *x;
    struct Eb0CFB88 *y;
    int n;
    int m;

    c = (struct Ctl0CFB88 *)func_0B2020((int *)D_0019E260);
    switch (D_00114B38) {
    case 0:
        func_0A9128();
        break;
    case 1:
        if (c != 0) {
            if (func_0A9108(c) != 0) {
                func_0A9780();
            } else if (func_0A90C8(c) != 0) {
                x = func_01EE10(c->h_14, -1);
                y = (struct Eb0CFB88 *)func_01EDC8(c->h_14, -1);
                if (x != 0 && y != 0) {
                    n = D_00104194->n_1C68 / c->d_0C;
                    m = x->v_38 - y->v_40;
                    if (m >= n) {
                        m = n;
                    }
                    D_00113A24 = m;
                }
                D_00114B38 = 2;
            } else {
                func_0A9438();
            }
        } else {
            D_00114B38 = 0;
        }
        break;
    case 2:
        func_0A95C0();
        break;
    }
}
