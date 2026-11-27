/* LEVEL_01:0x03C298 -- eases the first float toward the limit (capped at the limit) and the second down by 50 (floored at 0). */
typedef struct Obj {
    char pad000[0x96C];
    float value;
    float limit;
    char pad974[0xB28 - 0x974];
    float timer;
} Obj;

static __inline__ const float *MinF(const float *a, const float *b)
{
    return (*b < *a) ? b : a;
}

static __inline__ const float *MaxF(const float *a, const float *b)
{
    return (*b < *a) ? a : b;
}

void func_03C298(Obj *o)
{
    float next;
    float low;
    float zero;

    next = o->value + o->limit * 0.2f;
    o->value = *MinF(&o->limit, &next);
    low = o->timer - 50.0f;
    zero = 0.0f;
    o->timer = *MaxF(&low, &zero);
}
