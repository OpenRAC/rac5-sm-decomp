/* LEVEL_02:0x1B3178 -- resolves the record's first offset word into a pointer, scales its float field by 1/30 and returns 1 (0 when the word is empty). */
typedef struct {
    int w0;
    float f4;
} Rec;

typedef struct {
    char pad0[0x54];
    Rec *rec;
} Obj;

extern int D_0021BD54;

static __inline__ int Fixup(int *slot)
{
    int value = *slot;

    if (value == 0)
        return 0;
    *slot = D_0021BD54 + value;
    return 1;
}

int func_1B3178(Obj *o)
{
    Rec *r = o->rec;

    if (!Fixup(&r->w0))
        return 0;
    r->f4 = r->f4 * 0.033333335f;
    return 1;
}
