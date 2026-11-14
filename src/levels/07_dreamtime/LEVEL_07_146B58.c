/* LEVEL_07:0x146B58 -- placement copy of LEVEL_02_14A0A8.c: when the object's sub-record has a target, tests it against a freshly built vector and sets (no match) or clears (match) bit 0x20 of the object's flag word. */
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

extern void func_01A9F0(Vec4 *a0);
extern int func_086800(void *target, Vec4 *v);

void func_146B58(Obj *o)
{
    Sub *s;
    Vec4 v;

    s = o->sub;
    if (s->target != 0) {
        func_01A9F0(&v);
        if (func_086800(s->target, &v) != 0)
            o->flags &= ~0x20;
        else
            o->flags |= 0x20;
    }
}
