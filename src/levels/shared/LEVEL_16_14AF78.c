/* LEVEL_16:0x14AF78 -- finds the slot holding the given key or claims the first free slot (storing the key, value, two floats, a word and an optional extra record) and returns its index, or 0xFF when full. */
typedef struct Key { char pad00[0x64]; unsigned int w64; } Key;
typedef struct Slot { Key *key; int w4; int pad8[2]; float f10; float f14; int pad18; } Slot;
typedef struct Rec3 { Key *key; int pad4; int w8; int padC; int w10; } Rec3;
typedef struct Blk { Slot s[12]; int word[12]; Rec3 r[12]; } Blk;
typedef struct Obj { char pad00[0x58]; Blk *f58; } Obj;
int func_14AF78(Obj *o, Key *k, int a2, int a3, void *t0, float f12, float f13)
{
    Blk *b = o->f58;
    unsigned int i;
    unsigned int j;
    for (i = 0; i < 12; i++) {
        if (k == b->s[i].key) return i;
    }
    for (j = 0; j < 12; j++) {
        if (b->s[j].key == 0) {
            b->s[j].f14 = f13;
            b->s[j].w4 = a2;
            b->s[j].f10 = f12;
            b->s[j].key = k;
            k->w64 |= 0x10;
            b->word[j] = a3;
            if (t0 != 0) {
                b->r[j].key = k;
                b->r[j].w10 = (int)t0;
                b->r[j].w8 = 0;
            }
            return j;
        }
    }
    return 0xFF;
}
