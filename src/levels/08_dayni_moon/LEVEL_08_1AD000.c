/* LEVEL_08:0x1AD000 -- relocates the first offset field of the object's linked record on the global base (only when it is non-zero) and, when it was set, runs the check for slot 9, returning 1 on success, -1 on failure and 0 when there was no offset. */
extern int D_0024FC54;
extern int func_027CA8(unsigned int index);

struct Rec {
    int f0;
};

struct Obj {
    char pad00[0x54];
    struct Rec *f54;
};

static __inline__ int Fix(int *slot)
{
    int off = *slot;

    if (off == 0) {
        return 0;
    }
    *slot = D_0024FC54 + off;
    return 1;
}

int func_1AD000(struct Obj *o)
{
    int ok = Fix(&o->f54->f0);

    if (ok) {
        return func_027CA8(9) ? 1 : -1;
    }
    return 0;
}
