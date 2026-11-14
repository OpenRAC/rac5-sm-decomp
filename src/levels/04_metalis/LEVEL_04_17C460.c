/* LEVEL_04:0x17C460 -- releases an object's linked resources: runs the shared slot cleanup, stops and clears the two handles in its sub-record, tears down the embedded record and releases the trailing handle. */
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

extern void func_07FAE8(void *object, int flag);
extern void func_083F98(char *record);
extern void func_1D4E30(Outer *a0, int a1);
extern void func_1E7138(struct S1E7138 *p);

void func_17C460(Obj *o)
{
    Rec *rec = o->rec;
    Other *other = o->other;
    Sub *sub = &other->sub;

    func_1D4E30(rec->owner, (int)o);
    if (sub->first != 0) {
        func_07FAE8(sub->first, 1);
        sub->first = 0;
    }
    if (sub->second != 0) {
        func_083F98(sub->second);
        sub->second = 0;
    }
    func_1E7138((struct S1E7138 *)other->embedded);
    if (other->last != 0) {
        func_07FAE8(other->last, 1);
    }
}
