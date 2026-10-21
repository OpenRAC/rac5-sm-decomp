/* LEVEL_07:0x003A18 -- sets a bit in the object flags, stores the position and two floats. */
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

extern struct Global D_00203554;

void func_003A18(struct Vec *src, int flag, float a, float b)
{
    D_00203554.obj->flags |= 0x40000;
    D_00203554.obj->pos = *src;
    D_00203554.obj->a = a;
    D_00203554.obj->b = b;
    if (flag)
        D_00203554.obj->flags &= 0xFFFFFFFFFFFFFFDF;
}
