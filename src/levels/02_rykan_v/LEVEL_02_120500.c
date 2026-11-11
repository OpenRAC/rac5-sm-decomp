struct PoolEntry {
    int first;
    int second;
    unsigned int id;
};

extern struct PoolEntry D_0021BD70[];
extern unsigned int D_0021BE30;
extern void func_1204E8(struct PoolEntry *);

struct PoolEntry *func_120500(void)
{
    int index;
    for (index = 0; index < 16; index++) {
        struct PoolEntry *entry = &D_0021BD70[index];
        if (entry->id == 0xffffffffu) {
            unsigned int generation;
            func_1204E8(entry);
            generation = D_0021BE30;
            D_0021BE30 = generation + 1;
            entry->id = (generation << 8) | index;
            return entry;
        }
    }
    return 0;
}
