/* USA LEVEL_18.REL:0x155F58, 152-byte candidate (14 November 2026).
 * Measured pinned: 11 differing words; first difference at 72.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Tag {
    char pad_00[0x24];
    unsigned int hash;
} Tag;

typedef struct Inner {
    char pad_00[0xFC];
    int key;
} Inner;

typedef struct Link {
    Inner *inner;
} Link;

typedef struct Ent {
    char pad_00[0x40];
    Tag *tag;
    char pad_44[0x14];
    Link *link;
} Ent;

typedef struct Sub {
    char pad_00[4];
    unsigned char key;
} Sub;

typedef struct Mover {
    char pad_00[0x20];
    float timer;
} Mover;

typedef struct Obj {
    char pad_00[0x45];
    unsigned char state;
    char pad_46[0xE];
    Sub *sub;
    Mover *mover;
} Obj;

static __inline__ float *MaxPtr(float *a, float *b)
{
    if (*a < *b)
        return b;
    return a;
}

int func_155F58(Obj *object, int a1, int a2, int a3, int a4, Ent *ent)
{
    Mover *mover;
    float zero;

    if (ent != 0 && ent->tag->hash == 0x9707D8E6 && object->state == 1
        && ent->link->inner->key != object->sub->key) {
        mover = object->mover;
        zero = 0.0f;
        mover->timer = mover->timer - 1.0f;
        mover->timer = *MaxPtr(&mover->timer, &zero);
    }
    return 2;
}
