/* LEVEL_16:0x139910 -- resolves a record through a helper, then tests two sub-records with a second helper and reports whether both checks pass. */

struct Mid {
    char pad_00[0x5C];
    char *w_5C;
};

struct Sub {
    char pad_00[0x10];
    int w_10;
    char pad_14[0x34 - 0x14];
    int w_34;
};

struct Obj {
    char pad_00[0x54];
    struct Sub *p_54;
    struct Mid *p_58;
};

void func_13A010(char *a0, char *a1);
int func_0763F8(int a0, char *a1);

int func_139910(struct Obj *a0)
{
    struct Sub *s0;
    char loc[16];
    int r;

    r = 0;
    s0 = a0->p_54;
    func_13A010(a0->p_58->w_5C, loc);
    if (func_0763F8(s0->w_10, loc) != 0) {
        if (s0->w_34 == 0 || func_0763F8(s0->w_34, loc) == 0) {
            r = 1;
        }
    }
    return r;
}
