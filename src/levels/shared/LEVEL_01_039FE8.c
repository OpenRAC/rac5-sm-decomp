/* LEVEL_01:0x039FE8 -- tests a value in a nested record table entry against two constants. */
struct Ent { char pad0[0x20]; int v; char pad1[0x10]; };
struct Tbl { char pad0[4]; struct Ent *arr; };
struct Ch { char pad0[0x40]; struct Tbl *tbl; unsigned char idx; };
struct Rec { char pad0[0x5C8]; struct Ch *child; };

int func_039FE8(struct Rec *rec)
{
    struct Ch *child = rec->child;
    struct Ent *e;
    int value;

    if (child == 0)
        return 0;
    e = child->tbl->arr + child->idx;
    value = e->v;
    if (value == 0x0478fe9a)
        return 1;
    return value == 0x2df5e520;
}
