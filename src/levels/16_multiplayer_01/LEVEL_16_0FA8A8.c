struct PoolEntry {
    int first;
    int second;
    unsigned int id;
};

extern struct PoolEntry D_001B48C0[];
extern unsigned int D_001B4980;
extern void func_0FA890(struct PoolEntry *);

struct PoolEntry *func_0FA8A8(void)
{
    int index;
    for (index = 0; index < 16; index++) {
        struct PoolEntry *entry = &D_001B48C0[index];
        if (entry->id == 0xffffffffu) {
            unsigned int generation;
            func_0FA890(entry);
            generation = D_001B4980;
            D_001B4980 = generation + 1;
            entry->id = (generation << 8) | index;
            return entry;
        }
    }
    return 0;
}
