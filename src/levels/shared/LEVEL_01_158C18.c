/* LEVEL_01:0x158C18 -- sets one high flag bit in the 64-bit flag word of the world behind the object's link. */
typedef struct {
    char pad_00[0x960];
    unsigned long long flags;
} World;

typedef struct {
    World *world;
} Link;

typedef struct {
    char pad_00[0x58];
    Link *link;
} Obj;

void func_158C18(Obj *o)
{
    o->link->world->flags |= 0x40000000000ULL;
}
