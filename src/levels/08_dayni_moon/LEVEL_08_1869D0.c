/* LEVEL_08:0x1869D0 -- placement copy of LEVEL_04_17B310.c: re-initialises the object's state record: clears it, resolves the link's offset into a pointer (rejecting records whose word +0x40 is zero) and, for a small link kind, runs the setup helpers, takes the next index from the link's owner, installs two callbacks in the object's handler table and switches the mode bits. */
typedef struct Sub {
    int a;
    int b;
    int c;
} Sub;

typedef struct Owner {
    char pad00[0x4A];
    unsigned char next;
} Owner;

typedef struct Target {
    char pad00[0x58];
    Owner *owner;
} Target;

typedef struct Slot {
    Target *target;
    int kind;
} Slot;

typedef struct Handlers {
    char pad00[0xDC];
    void (*h1)(void);
    void (*h2)(void);
} Handlers;

typedef struct Obj {
    char pad_00[0x48];
    Handlers *handlers;
    char pad_4C[8];
    Slot *slot;
    char *rec;
    char pad_5C[0x78 - 0x5C];
    unsigned int flags78;
} Obj;

extern void *memset(void *, int, unsigned int);
extern int D_0024FC54;
extern char D_003E5B98[];
extern void func_21AEA0(char *object);
extern void func_20F168(char *record);
extern float func_084B98(void *o, unsigned int idx);
extern void func_1F9D08(void *a0, void *a1, void *a2, int a3);
extern void func_1871E8(void);
extern void func_187198(void);

static __inline__ int Resolve(Slot *slot)
{
    Target *target;

    if (slot->target == 0)
        return 0;
    target = (Target *)(D_0024FC54 + (int)slot->target);
    if (*(int *)((char *)target + 0x40) == 0) {
        slot->target = 0;
        return 0;
    }
    slot->target = target;
    return 1;
}

int func_1869D0(Obj *o)
{
    char *rec = o->rec;
    Slot *slot;
    char *sub;
    Sub *z;
    unsigned char idx;
    Owner *owner;

    memset(rec, 0, 0x11C);
    slot = o->slot;
    if (!Resolve(slot))
        return 0;
    if (slot->kind >= 3)
        return 0;
    func_21AEA0(rec + 0x90);
    sub = rec + 0xA8;
    z = (Sub *)(rec + 0x9C);
    z->a = 0;
    z->b = 0;
    z->c = 0;
    func_20F168(sub);
    rec[0x8B] = 0;
    func_084B98(o, 0);
    func_1F9D08(slot->target, o, D_003E5B98, 0);
    owner = slot->target->owner;
    idx = owner->next;
    owner->next = idx + 1;
    rec[0x11A] = idx;
    o->handlers->h1 = func_1871E8;
    o->handlers->h2 = func_187198;
    *(float *)(rec + 0x110) = 20.0f;
    o->flags78 = (o->flags78 & 0xFFF0FFFF) | 0x20000;
    func_20F168(sub);
    return 1;
}
