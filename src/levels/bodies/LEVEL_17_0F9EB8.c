struct PoolEntry {
    int first;
    int second;
    unsigned int id;
};

extern struct PoolEntry D_001A7EC0[];
extern unsigned int D_001A7F80;
extern void func_0F9EA0(struct PoolEntry *);

struct PoolEntry *func_0F9EB8(void)
{
    int index;
    for (index = 0; index < 16; index++) {
        struct PoolEntry *entry = &D_001A7EC0[index];
        if (entry->id == 0xffffffffu) {
            unsigned int generation;
            func_0F9EA0(entry);
            generation = D_001A7F80;
            D_001A7F80 = generation + 1;
            entry->id = (generation << 8) | index;
            return entry;
        }
    }
    return 0;
}
