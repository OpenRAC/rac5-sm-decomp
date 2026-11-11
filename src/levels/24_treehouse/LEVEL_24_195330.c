/* LEVEL_24:0x195330 -- placement copy of LEVEL_04_1C6708.c: resets an object's state and its record (the record's owner becomes the object), merges one global value into a bit range of another global word, sets two flag bits and clears a field of the object's holder; returns 1. */
typedef struct {
    int f00;
    char pad04[0xA];
    unsigned char b0E;
    char pad0F;
    void *owner;
    int f14;
} Rec;

typedef struct {
    char pad00[4];
    int f04;
} Holder;

typedef struct {
    char pad00[0x45];
    unsigned char state;
    char pad46[0xE];
    Holder *holder;
    Rec *rec;
    char pad5C[8];
    unsigned int flags;
} Obj;

extern unsigned int D_001D9D64[1];
extern unsigned int D_00263D2C[1];

int func_195330(Obj *o)
{
    Rec *r = o->rec;
    Holder *h = o->holder;

    o->state = 0;
    r->f00 = 0;
    r->owner = o;
    r->f14 = 0;
    r->b0E = 2;
    D_001D9D64[0] = (D_001D9D64[0] & 0xF800FFFFu) | (D_00263D2C[0] << 16);
    o->flags = o->flags | 0x30;
    h->f04 = 0;
    return 1;
}
