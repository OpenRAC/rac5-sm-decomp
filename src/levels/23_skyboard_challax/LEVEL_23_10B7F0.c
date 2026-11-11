struct PoolEntry {
    int first;
    int second;
    unsigned int id;
};

extern struct PoolEntry *func_10B720(void);
extern int func_0273B0(void *stream, int mode, int unused0, int unused1);
extern void func_10B708(unsigned int *words);

unsigned int func_10B7F0(void *stream)
{
    struct PoolEntry *entry = func_10B720();
    if (entry != 0) {
        int handle = func_0273B0(stream, 1, 0, 0) + 1;
        entry->first = handle;
        if (handle != 0) {
            entry->second = 1;
            return entry->id;
        }
        func_10B708((unsigned int *)entry);
    }
    return 0xffffffffu;
}
