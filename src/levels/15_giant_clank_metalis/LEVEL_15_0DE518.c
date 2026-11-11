struct PoolEntry {
    int first;
    int second;
    unsigned int id;
};

extern struct PoolEntry D_0015B730[];
extern unsigned int D_0015B7F0;
extern void func_0DE500(struct PoolEntry *);

struct PoolEntry *func_0DE518(void)
{
    int index;
    for (index = 0; index < 16; index++) {
        struct PoolEntry *entry = &D_0015B730[index];
        if (entry->id == 0xffffffffu) {
            unsigned int generation;
            func_0DE500(entry);
            generation = D_0015B7F0;
            D_0015B7F0 = generation + 1;
            entry->id = (generation << 8) | index;
            return entry;
        }
    }
    return 0;
}
