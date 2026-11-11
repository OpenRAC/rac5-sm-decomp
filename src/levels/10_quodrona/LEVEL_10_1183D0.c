struct PoolEntry {
    int first;
    int second;
    unsigned int id;
};

extern struct PoolEntry D_0020FA10[];
extern unsigned int D_0020FAD0;
extern void func_1183B8(struct PoolEntry *);

struct PoolEntry *func_1183D0(void)
{
    int index;
    for (index = 0; index < 16; index++) {
        struct PoolEntry *entry = &D_0020FA10[index];
        if (entry->id == 0xffffffffu) {
            unsigned int generation;
            func_1183B8(entry);
            generation = D_0020FAD0;
            D_0020FAD0 = generation + 1;
            entry->id = (generation << 8) | index;
            return entry;
        }
    }
    return 0;
}
