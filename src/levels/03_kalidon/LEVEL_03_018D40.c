/* LEVEL_03:0x018D40 -- placement copy of LEVEL_01_018F38.c: copies out two stored 4x4 matrices and two small fields from the global state, when it is valid. */

struct Mat_018F38 {
    float m[16];
};

struct State_018F38 {
    struct Mat_018F38 a;
    struct Mat_018F38 b;
    unsigned short h_80;
    unsigned char b_82;
    unsigned char b_83;
};

extern char *D_0020C62C;

int func_018D40(struct Mat_018F38 *a0, struct Mat_018F38 *a1, unsigned short *a2, unsigned char *a3)
{
    struct State_018F38 *s;

    s = (struct State_018F38 *)(D_0020C62C + 0x10490);
    if (s->b_83 == 0) {
        return 0;
    }
    if (a0 != 0) {
        *a0 = s->a;
    }
    if (a1 != 0) {
        *a1 = s->b;
    }
    if (a2 != 0) {
        *a2 = s->h_80;
    }
    if (a3 != 0) {
        *a3 = s->b_82;
    }
    return 1;
}
