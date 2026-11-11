/* LEVEL_15:0x003570 -- raises a flag of the global object, copies the
   twelve bytes of the source block, stores the two scalars and clears the
   flag again when the argument says so. */
struct Vec2 {
    float x;
    float y;
};

struct Chunk {
    struct Vec2 v;
    int z;
};

struct Src {
    struct Chunk c;
};

struct Dest {
    char pad000[0x40];
    unsigned long long flags;
    char pad048[0x250 - 0x48];
    struct Chunk c;
    float w;
    float t;
};

extern char D_00143EBC[];

void func_003570(struct Src *src, int flag, float w, float t)
{
    (*(struct Dest **)D_00143EBC)->flags |= 0x40000;
    (*(struct Dest **)D_00143EBC)->c = src->c;
    (*(struct Dest **)D_00143EBC)->w = w;
    (*(struct Dest **)D_00143EBC)->t = t;
    if (flag)
        (*(struct Dest **)D_00143EBC)->flags &= 0xFFFFFFFFFFFFFFDF;
}
