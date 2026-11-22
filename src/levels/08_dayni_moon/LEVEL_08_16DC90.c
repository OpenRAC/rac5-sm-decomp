/* LEVEL_08:0x16DC90 -- placement copy of LEVEL_04_166FC8.c: re-initialises the object's state record: clears the 0xE0-byte record, resolves the link's offset into a pointer (rejecting records whose word +0x40 is zero) and, on success, runs the setup helpers, resets the record's sub-fields and switches the object's mode bits. */
typedef struct Sub {
    int a;
    int b;
    int c;
} Sub;

typedef struct Slot {
    char *target;
} Slot;

typedef struct Obj {
    char pad_00[0x54];
    Slot *slot;
    char *rec;
    char pad_5C[0x64 - 0x5C];
    unsigned int flags64;
    char pad_68[0x78 - 0x68];
    unsigned int flags78;
} Obj;

extern void *memset(void *, int, unsigned int);
extern int D_0024FC54;
extern char D_003E2D50[];
extern void func_21AEA0(char *object);
extern void func_20EE58(char *record);
extern float func_084B98(void *o, unsigned int idx);
extern void func_1F9D08(void *a0, void *a1, void *a2, int a3);

static __inline__ int Resolve(Slot *slot)
{
    char *target;

    if (slot->target == 0)
        return 0;
    target = (char *)(D_0024FC54 + (int)slot->target);
    if (*(int *)(target + 0x40) == 0) {
        slot->target = 0;
        return 0;
    }
    slot->target = target;
    return 1;
}

int func_16DC90(Obj *o)
{
    char *rec = o->rec;
    Slot *slot;
    Sub *sub;

    memset(rec, 0, 0xE0);
    slot = o->slot;
    o->flags64 |= 0x1000;
    if (!Resolve(slot))
        return 0;
    func_21AEA0(rec + 0x44);
    func_20EE58(rec + 0x5C);
    rec[0x3E] = 0;
    func_084B98(o, 0);
    func_1F9D08(slot->target, o, D_003E2D50, 1);
    sub = (Sub *)(rec + 0x50);
    sub->a = 0;
    sub->b = 0;
    sub->c = 0;
    o->flags78 = (o->flags78 & 0xFFF0FFFF) | 0x20000;
    return 1;
}
