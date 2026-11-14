/* USA LEVEL_01.REL:0x03C298, 132-byte candidate (14 November 2026).
 * Measured pinned: 9 differing words; first difference at 0x3C.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Obj {
    char pad000[0x96C];
    float value;
    float limit;
    char pad974[0xB28 - 0x974];
    float timer;
} Obj;

void func_03C298(Obj *o)
{
    float next;
    float zero;
    float low;
    float *p;
    float *q;

    next = o->value + o->limit * 0.2f;
    p = (next < o->limit) ? &next : &o->limit;
    o->value = *p;
    low = o->timer - 50.0f;
    zero = 0.0f;
    q = (zero < low) ? &low : &zero;
    o->timer = *q;
}
