/* LEVEL_06:0x16E1E8 -- picks a byte code from a sub-object flag, and a second routine stores a helper result and clears two flag bits. */

struct Obj16E1E8 {
    char pad_00[0x54];
    char *p_54;
    char *p_58;
    char pad_5C[0x8];
    int w_64;
};

int func_15BD78(char *a, struct Obj16E1E8 *b, int c, float x, float y);

void func_16E1E8(struct Obj16E1E8 *o)
{
    char *s;
    char *q;

    s = o->p_54;
    q = o->p_58;
    if (*(int *)(s + 0x3C) != 0) {
        *(unsigned char *)(q + 0x90) = 9;
    } else {
        *(unsigned char *)(q + 0x90) = 10;
    }
}

void func_16E210(struct Obj16E1E8 *o)
{
    char *s;
    char *q;
    int w;

    s = o->p_54;
    q = o->p_58;
    *(unsigned char *)(q + 0x92) = func_15BD78(*(char **)(s + 0x2C), o, (int)s, 0.75f, 1.0f);
    w = o->w_64;
    w &= ~0x20;
    w &= ~0x400;
    o->w_64 = w;
}
