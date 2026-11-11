/* LEVEL_10:0x1AC630 -- searches the object's table for the global game's key and mirrors the hit into bit 22 of the flags of the global's linked record. */
typedef struct Thing {
    char pad0[0x64];
    unsigned int flags;
} Thing;

typedef struct Game {
    char pad0[0x30];
    char key[0x56C];
    Thing *thing;
} Game;

typedef struct Obj {
    char pad0[0x54];
    void **table;
} Obj;

extern void *func_1C82C0(void *c, void *key);
extern Game D_0023E540;

void func_1AC630(Obj *o)
{
    Game *g;
    int hit;

    g = &D_0023E540;
    hit = func_1C82C0(*o->table, g->key) != 0;
    g->thing->flags = (g->thing->flags & ~0x400000) | (hit << 22);
}
