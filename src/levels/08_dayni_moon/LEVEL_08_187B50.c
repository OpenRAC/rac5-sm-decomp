/* LEVEL_08:0x187B50 -- placement copy of LEVEL_04_17C460.c: releases an object's linked resources: runs the shared slot cleanup, stops and clears the two handles in its sub-record, tears down the embedded record and releases the trailing handle. */
typedef struct {
    char pad_00[0x58];
    void *f_58;
} Outer;

typedef struct {
    Outer *owner;
} Rec;

typedef struct {
    int f00;
    void *first;
    char *second;
} Sub;

typedef struct {
    char pad00[0x4C];
    Sub sub;
    char embedded[0x5C];
    void *last;
} Other;

typedef struct {
    char pad00[0x54];
    Rec *rec;
    Other *other;
} Obj;

struct S1E7138;

extern void func_0845F8(void *object, int flag);
extern void func_088AA8(char *record);
extern void func_1F9DB0(Outer *a0, int a1);
extern void func_20ED08(struct S1E7138 *p);

void func_187B50(Obj *o)
{
    Rec *rec = o->rec;
    Other *other = o->other;
    Sub *sub = &other->sub;

    func_1F9DB0(rec->owner, (int)o);
    if (sub->first != 0) {
        func_0845F8(sub->first, 1);
        sub->first = 0;
    }
    if (sub->second != 0) {
        func_088AA8(sub->second);
        sub->second = 0;
    }
    func_20ED08((struct S1E7138 *)other->embedded);
    if (other->last != 0) {
        func_0845F8(other->last, 1);
    }
}
