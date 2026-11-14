/* LEVEL_03:0x157D30 -- claims the first free of the owner's twelve slots for an object (storing the object, a value and clearing a flag byte), marks the object and returns the slot index, or 0xFF when full. */
typedef struct X { char pad00[0x64]; unsigned int w64; } X;
typedef struct St { char pad00[0x20]; X *x[12]; int w[14]; unsigned char used[12]; unsigned char b94[12]; char pad_a0[4]; unsigned char cnt; } St;
typedef struct Obj { char pad00[0x54]; St *f54; } Obj;
int func_157D30(Obj *o, X *x, int w, int unused)
{
    St *st = o->f54;
    unsigned int i;
    if (st->cnt >= 12) return 0xFF;
    for (i = 0; i < 12; i++) {
        if (st->used[i] == 0) {
            st->x[i] = x;
            st->used[i] = 1;
            st->b94[i] = 0;
            st->w[i] = w;
            x->w64 |= 0x20;
            st->cnt++;
            return i & 0xFF;
        }
    }
    return 0xFF;
}
