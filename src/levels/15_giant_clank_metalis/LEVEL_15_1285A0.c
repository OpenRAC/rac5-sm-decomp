/* LEVEL_15:0x1285A0 -- walks the object's chain of record blocks and runs the helper on every 0xA4-byte entry. */
typedef struct Entry {
    char pad_00[0xA4];
} Entry;

typedef struct Block {
    struct Block *next;
    char pad_04[8];
    Entry *entries;
    int count;
} Block;

typedef struct Obj {
    char pad_00[8];
    Block *blocks;
} Obj;

extern void func_127C50();

void func_1285A0(Obj *object)
{
    Block *block;
    Entry *entry;
    Entry *end;

    for (block = object->blocks; block != 0; block = block->next) {
        entry = block->entries;
        end = entry + block->count;
        do {
            func_127C50(entry);
            entry++;
        } while (entry != end);
    }
}
