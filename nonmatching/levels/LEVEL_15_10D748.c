/* USA LEVEL_15.REL:0x10D748, 120-byte candidate (14 November 2026).
 * Measured gnu-ee-trial: 11 differing words; first difference at 0x8.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Owner {
    char pad0[0x238];
    float a;
    char pad23C[4];
    float timer;
} Owner;

extern void func_10D508(Owner *o, int arg);

void func_10D748(char *member, int a1, int a2, float *src)
{
    Owner *o = (Owner *)(member - 0x2D8);
    float t;
    float half;

    half = 0.5f;
    o->a = o->a - src[1];
    t = o->timer - src[1] * half;
    if (t <= 0.0f) {
        func_10D508(o, a2);
        o->timer = 0.0f;
    } else {
        o->timer = t;
    }
}
