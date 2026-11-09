/* LEVEL_16:0x14D3C8 -- updates object flags of an item table; fails if both state bytes are 2. */
typedef struct {
    char pad[0x64];
    int flags;
} Obj;
typedef struct {
    Obj *obj;
    char pad[0x18];
} Item;
typedef struct {
    Item items[12];
    char pad[0x40D - 0x150];
    unsigned char st[2];
} Tab;
typedef struct {
    char pad[0x58];
    Tab *tab;
} Ctx;

int func_14D3C8(Ctx *c)
{
    Tab *t = c->tab;
    Item *it;
    Item *jt;
    Item *jt0;
    unsigned i;
    it = t->items;
    do {
        if (it->obj) {
            it->obj->flags = (it->obj->flags & ~0x20) | 0x20;
            it->obj->flags &= ~0x40;
        }
        it++;
    } while (it < t->items + 12);
    i = 0;
    do {
        if (t->st[i++] != 2) {
            jt = t->items;
            jt0 = jt;
            do {
                if (jt->obj) {
                    jt->obj->flags &= ~0x20;
                    jt->obj->flags &= ~0x40;
                }
                jt++;
            } while (jt < jt0 + 12);
            return 1;
        }
    } while (i < 2);
    return 0;
}
