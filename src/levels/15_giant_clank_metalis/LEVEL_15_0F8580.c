/* LEVEL_15:0x0F8580 -- walks the object's list of blocks and runs the item helper on every 0x48-byte item of each block. */
struct Block {
    struct Block *next;
    char pad04[8];
    char *items;
    int count;
};

struct Obj {
    char pad00[8];
    struct Block *blocks;
};

extern void func_0F8130(char *item);

void func_0F8580(struct Obj *o)
{
    struct Block *b = o->blocks;
    char *p;
    char *end;

    while (b != 0) {
        p = b->items;
        end = p + b->count * 0x48;
        do {
            func_0F8130(p);
            p += 0x48;
        } while (p != end);
        b = b->next;
    }
}
