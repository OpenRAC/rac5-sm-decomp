/* LEVEL_23:0x186910 -- relocates the first offset field of the object's linked record on the global base (only when it is non-zero) and, when it was set, starts the slot 7 effect, sets the object state byte to 1 and returns 1; returns 0 when there was no offset. */
extern int D_001DA194;
extern int func_025400(unsigned int index, int enabled);

struct Rec {
    int f0;
};

struct Obj {
    char pad00[0x45];
    unsigned char b45;
    char pad46[0xE];
    struct Rec *f54;
};

static __inline__ int Fix(int *slot)
{
    int off = *slot;

    if (off == 0) {
        return 0;
    }
    *slot = D_001DA194 + off;
    return 1;
}

int func_186910(struct Obj *o)
{
    int ok = Fix(&o->f54->f0);

    if (!ok) {
        return 0;
    }
    func_025400(7, 1);
    o->b45 = 1;
    return 1;
}
