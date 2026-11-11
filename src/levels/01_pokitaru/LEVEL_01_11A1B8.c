struct PoolEntry {
    int first;
    int second;
    unsigned int id;
};

extern struct PoolEntry D_00206DB0[];
extern unsigned int D_00206E70;
extern void func_11A1A0(struct PoolEntry *);

struct PoolEntry *func_11A1B8(void)
{
    int index;
    for (index = 0; index < 16; index++) {
        struct PoolEntry *entry = &D_00206DB0[index];
        if (entry->id == 0xffffffffu) {
            unsigned int generation;
            func_11A1A0(entry);
            generation = D_00206E70;
            D_00206E70 = generation + 1;
            entry->id = (generation << 8) | index;
            return entry;
        }
    }
    return 0;
}
