/* LEVEL_18:0x15E2B0 -- when the sub-record's flag byte at +0x120 is set, updates its three 0x5C-byte records that start at +0xC. */
typedef struct {
    char data[0x5C];
} Item;

typedef struct {
    char pad00[0xC];
    Item items[3];
    char pad120[0x120 - 0xC - 3 * 0x5C];
    unsigned char b120;
} Sub;

typedef struct {
    char pad00[0x58];
    Sub *sub;
} Obj;

extern void func_160BE8(char *record);

void func_15E2B0(Obj *o)
{
    Sub *s;
    int i;

    s = o->sub;
    if (s->b120 != 0) {
        for (i = 0; i < 3; i++)
            func_160BE8(s->items[i].data);
    }
}
