/* LEVEL_04:0x193EF0 -- when the lookup for entry 0x1B/0xFF succeeds, clears the flag byte inside both attached blocks of the object's pair and runs the shared follow-up. */
typedef struct {
    char pad_00[0x28];
    unsigned char b28;
} Blk;

typedef struct {
    char pad_00[0x54];
    Blk *blk;
} Ent;

typedef struct {
    Ent *a;
    Ent *b;
} Pair;

typedef struct {
    char pad_00[0x54];
    Pair *pair;
} Obj;

extern int func_027098(int id, int arg);
extern void func_07FAE8(Obj *o, int arg);

void func_193EF0(Obj *o)
{
    Pair *pair;

    pair = o->pair;
    if (func_027098(0x1B, 0xFF) != 0) {
        pair->a->blk->b28 = 0;
        pair->b->blk->b28 = 0;
        func_07FAE8(o, 1);
    }
}
