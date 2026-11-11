/* LEVEL_03:0x179618 -- adds a bit to the object's 32-bit set, growing the
   recorded count; returns whether the bit was newly added. */
typedef struct {
    char pad[0x8];
    int count;
    int mask;
} Set;

typedef struct {
    char pad[0x58];
    Set *set;
} Obj;

int func_179618(Obj *obj, int unused, int bit)
{
    Set *set = obj->set;
    int m;

    if (bit < 0 || bit >= 32)
        return 0;
    m = 1 << bit;
    if (set->mask & m)
        return 0;
    set->mask |= m;
    if (set->count < bit + 1)
        set->count = bit + 1;
    return 1;
}
