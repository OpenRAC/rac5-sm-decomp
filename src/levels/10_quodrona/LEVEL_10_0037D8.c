/* LEVEL_10:0x0037D8 -- sets a bit in the object flags, stores the position and two floats. */
struct Vec {
    float x;
    float y;
    float z;
};

struct Obj {
    char pad00[0x40];
    unsigned long long flags;
    char pad48[0x250 - 0x48];
    struct Vec pos;
    float a;
    float b;
};

struct Global {
    struct Obj *obj;
};

extern struct Global D_001F8254;

void func_0037D8(struct Vec *src, int flag, float a, float b)
{
    D_001F8254.obj->flags |= 0x40000;
    D_001F8254.obj->pos = *src;
    D_001F8254.obj->a = a;
    D_001F8254.obj->b = b;
    if (flag)
        D_001F8254.obj->flags &= 0xFFFFFFFFFFFFFFDF;
}
