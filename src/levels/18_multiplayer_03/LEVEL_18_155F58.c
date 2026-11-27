/* LEVEL_18:0x155F58 -- when the entry's tag matches and the object is in state 1 with a different key, counts the object's timer down by one (not below zero). */
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
    float *timer;
    float zero;

    if (ent != 0 && ent->tag->hash == 0x9707D8E6 && object->state == 1) {
        mover = object->mover;
        if (ent->link->inner->key != object->sub->key) {
            timer = &mover->timer;
            *timer -= 1.0f;
            zero = 0.0f;
            *timer = *MaxPtr(timer, &zero);
        }
    }
    return 2;
}
