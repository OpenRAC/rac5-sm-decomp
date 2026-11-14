/* USA LEVEL_03.REL:0x17AF10, 176-byte candidate (14 November 2026).
 * Measured pinned -fno-gcse: 21 differing words; first difference at 0x4.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
struct V4 {
    float x_00;
    float y_04;
    float z_08;
    float w_0c;
};

struct S58 {
    unsigned short h_00;
    unsigned char b_02;
    unsigned char f_03;
    int w_04;
};

struct Obj {
    char pad_00[0x58];
    struct S58 *p_58;
};

extern char D_0024A578[];
extern int func_081B70(struct V4 *a, struct V4 *b, int c);
extern int func_094EA0(char *base, struct S58 *s, struct V4 *a, struct V4 *b, int code);

void func_17AF10(struct Obj *o)
{
    struct S58 *s;
    struct V4 a;
    struct V4 b;
    unsigned int flag;

    s = o->p_58;
    if (s->h_00 != 0xFFFF) {
        return;
    }
    if (func_081B70(&a, &b, s->w_04) == 0) {
        return;
    }
    if (8.0f < b.x_00 - a.x_00 || 8.0f < b.z_08 - a.z_08) {
        flag = 1;
    } else {
        flag = 0;
    }
    s->f_03 = flag;
    func_094EA0(D_0024A578 + flag * 0x68, s, &a, &b, 0x1511);
}
