/* LEVEL_05:0x1627D0 -- claims the first free slot of the object's eight-entry table (owner, two vectors, a byte and two words), flags the owner and returns the slot index, or 0xFF when the table is full. */
typedef struct V3 {
    float x;
    float y;
    float z;
} V3;

typedef struct Rec {
    char pad_00[0x64];
    unsigned int flags;
} Rec;

typedef struct Slot {
    Rec *owner;
    int w4;
    V3 p;
    V3 q;
    unsigned char b20;
    char pad_21[3];
    int w24;
} Slot;

static __inline__ void CopyV3(V3 *d, V3 *s)
{
    d->x = s->x;
    d->y = s->y;
    d->z = s->z;
}

unsigned char func_1627D0(char *obj, Rec *owner, unsigned char b20, V3 *p, V3 *q, int w4, int w24)
{
    Slot *s;
    unsigned int i;

    s = *(Slot **)(obj + 0x58);
    for (i = 0; i < 8; i++) {
        if (s->owner == 0) {
            s->w4 = w4;
            s->b20 = b20;
            s->w24 = w24;
            s->owner = owner;
            CopyV3(&s->p, p);
            CopyV3(&s->q, q);
            owner->flags |= 0x20;
            s->owner->flags |= 0x10;
            return i;
        }
        s++;
    }
    return 0xFF;
}
