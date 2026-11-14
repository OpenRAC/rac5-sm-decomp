/* LEVEL_02:0x14A0A8 -- when the object's sub-record has a target, tests it against a freshly built vector and sets (no match) or clears (match) bit 0x20 of the object's flag word. */
typedef struct {
    float x;
    float y;
    float z;
    float w;
} Vec4;

typedef struct {
    char pad00[4];
    void *target;
} Sub;

typedef struct {
    char pad00[0x54];
    Sub *sub;
    char pad58[0x64 - 0x58];
    int flags;
} Obj;

extern void func_01AC80(Vec4 *a0);
extern int func_08B060(void *target, Vec4 *v);

void func_14A0A8(Obj *o)
{
    Sub *s;
    Vec4 v;

    s = o->sub;
    if (s->target != 0) {
        func_01AC80(&v);
        if (func_08B060(s->target, &v) != 0)
            o->flags &= ~0x20;
        else
            o->flags |= 0x20;
    }
}
