/* LEVEL_04:0x196490 -- turns the object's two stored offsets into pointers into the global pool, keeping each only when the pooled entry's word at 0x40 is set; returns 1 when both resolve. */
typedef struct { char pad_00[0x54]; int *slots; } Obj;

extern char *D_002201B4;

static inline int Fix(int *slot)
{
    char *p;

    if (*slot == 0) {
        return 0;
    }
    p = D_002201B4 + *slot;
    if (*(int *)(p + 0x40) == 0) {
        *slot = 0;
        return 0;
    }
    *slot = (int)p;
    return 1;
}

int func_196490(Obj *o)
{
    int *s = o->slots;

    if (Fix(&s[0]) == 0) {
        return 0;
    }
    return Fix(&s[1]);
}
