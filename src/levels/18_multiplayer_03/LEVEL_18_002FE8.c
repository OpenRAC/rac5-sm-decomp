/* LEVEL_18:0x002FE8 -- copies a position into the object's transform. */
struct Vec {
    float x;
    float y;
    float z;
};

struct Obj {
    char pad[0x1D8];
    struct Vec pos;
};

extern struct Obj *D_0019C15C;

void func_002FE8(struct Vec *src)
{
    D_0019C15C->pos = *src;
}
