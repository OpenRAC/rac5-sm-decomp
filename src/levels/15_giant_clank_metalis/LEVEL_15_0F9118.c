/* LEVEL_15:0x0F9118 -- runs the per-record helper over every 0x54-byte record of every block in the owner's block list. */
typedef struct Block {
    struct Block *next;
    char pad_04[8];
    char *items;
    int count;
} Block;

typedef struct {
    char pad_00[8];
    Block *first;
} Owner;

extern void func_0F87B0(void);

void func_0F9118(Owner *o)
{
    Block *b = o->first;
    char *p;
    char *end;

    while (b != 0) {
        p = b->items;
        end = p + b->count * 0x54;
        do {
            ((void (*)(char *))func_0F87B0)(p);
            p += 0x54;
        } while (p != end);
        b = b->next;
    }
}
