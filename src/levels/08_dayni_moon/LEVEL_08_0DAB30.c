/* LEVEL_08:0x0DAB30 -- placement copy of LEVEL_01_0CFB88.c: steps a three-state controller and, in state one, advances it to state two after clamping a stored value. */

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

extern char D_0037BC20[];
extern unsigned int D_0024D468;
extern int D_0024C354;
extern struct Env0CFB88 *D_0023CB2C;

int func_0E33C8(int *set);
int func_0DA4A8(void);
int func_0DA488(struct Ctl0CFB88 *c);
void func_0DAB00(void);
int func_0DA448(struct Ctl0CFB88 *c);
struct Ea0CFB88 *func_024EF0(int h, int k);
int func_024EA8(int x, int y);
void func_0DA7B8(void);
void func_0DA940(void);

void func_0DAB30(void)
{
    struct Ctl0CFB88 *c;
    struct Ea0CFB88 *x;
    struct Eb0CFB88 *y;
    int n;
    int m;

    c = (struct Ctl0CFB88 *)func_0E33C8((int *)D_0037BC20);
    switch (D_0024D468) {
    case 0:
        func_0DA4A8();
        break;
    case 1:
        if (c != 0) {
            if (func_0DA488(c) != 0) {
                func_0DAB00();
            } else if (func_0DA448(c) != 0) {
                x = func_024EF0(c->h_14, -1);
                y = (struct Eb0CFB88 *)func_024EA8(c->h_14, -1);
                if (x != 0 && y != 0) {
                    n = D_0023CB2C->n_1C68 / c->d_0C;
                    m = x->v_38 - y->v_40;
                    if (m >= n) {
                        m = n;
                    }
                    D_0024C354 = m;
                }
                D_0024D468 = 2;
            } else {
                func_0DA7B8();
            }
        } else {
            D_0024D468 = 0;
        }
        break;
    case 2:
        func_0DA940();
        break;
    }
}
