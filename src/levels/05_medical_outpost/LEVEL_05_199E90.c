/* LEVEL_05:0x199E90 -- gives back the slot's pool entry (when one is held), clears a flag and runs the object finish step. */
typedef struct Rec { unsigned short handle; unsigned char b2; unsigned char pool; } Rec;
typedef struct Obj { char pad00[0x58]; Rec *slot; char pad5C[8]; unsigned int w64; } Obj;
typedef struct Ent { char pad00[0x68]; } Ent;
extern Ent D_0021B3F8[];
extern void func_092F50(Ent *e, unsigned int index);
extern void func_018BF8(Obj *o);

static __inline__ void Release(Ent *pool, unsigned short *h)
{
    if (*h != 0xFFFF) {
        func_092F50(pool, *h);
        *h = 0xFFFF;
    }
}

void func_199E90(Obj *o)
{
    Rec *slot = o->slot;

    Release(&D_0021B3F8[slot->pool], &slot->handle);
    o->w64 &= ~0x08000000;
    func_018BF8(o);
}
