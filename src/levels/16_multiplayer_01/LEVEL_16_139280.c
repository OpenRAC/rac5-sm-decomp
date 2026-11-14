/* LEVEL_16:0x139280 -- when func_06FB50 accepts the object, runs func_13A1E0, gives back the pool entry held by the record's slot and passes the linked value and a record byte to func_14B0E0. */
typedef struct {
    char pad60[0x60];
    void *entries;
    void *nodes;
} Pool;

typedef struct {
    char pad00[0x10];
    unsigned short handle;
    char pad12;
    unsigned char pool;
    char pad14[0x70 - 0x14];
    unsigned char b70;
} Slot;

typedef struct {
    char pad00[0x30];
    int w30;
} Link;

typedef struct {
    char pad00[0x54];
    Link *link;
    Slot *slot;
} Obj;

extern Pool D_001DE3F8[];
extern int func_06FB50(Obj *o, int flag);
extern void func_13A1E0(float f, Obj *o);
extern void func_086440(Pool *o, unsigned int index);
extern void func_14B0E0(int a, int b);

static __inline__ void Release(Pool *pool, unsigned short *h)
{
    if (*h != 0xFFFF) {
        func_086440(pool, *h);
        *h = 0xFFFF;
    }
}

void func_139280(Obj *o)
{
    Slot *slot;
    Link *link;

    if (func_06FB50(o, 0) != 0) {
        slot = o->slot;
        link = o->link;
        func_13A1E0(1.0f, o);
        Release(&D_001DE3F8[slot->pool], &slot->handle);
        func_14B0E0(link->w30, slot->b70);
    }
}
