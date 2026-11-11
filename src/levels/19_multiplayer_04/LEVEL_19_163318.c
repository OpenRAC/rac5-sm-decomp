/* LEVEL_19:0x163318 -- placement copy of LEVEL_16_163F70.c: walks the object's 0x80-byte entry array and, for every active entry whose owner is in state 0x23, tells the owner whether the global index matches its previous slot. */
typedef struct {
    char pad_00[0xE7C];
    int f_E7C;
    char pad_E80[0xF44 - 0xE80];
    float f_F44;
} Obj;

typedef struct Owner {
    char pad_00[0xF4];
    int slot;
    char pad_F8[0x100 - 0xF8];
    short state;
} Owner;

typedef struct Entry {
    char pad_00[0x58];
    Owner **owner;
    char pad_5C[8];
    unsigned int flags;
    char pad_68[0x80 - 0x68];
} Entry;

typedef struct Self {
    char pad_00[0x0C];
    Entry *entries;
    char pad_10[0x30 - 0x10];
    int count;
} Self;

extern int D_0019C020;
static __inline__ int IsState(short s, int v)
{
    return s == v;
}
extern void func_05B7C8(Obj *a0, int a1);

void func_163318(Self *self)
{
    Entry *e;
    Entry *end;
    Owner *o;

    e = self->entries;
    end = e + self->count;
    for (; e != end; e++) {
        if (e->flags & 1) {
            o = *e->owner;
            if (IsState(o->state, 0x23)) {
                if (D_0019C020 == o->slot - 1) {
                    func_05B7C8((Obj *)o, 0);
                } else {
                    func_05B7C8((Obj *)o, 1);
                }
            }
        }
    }
}
