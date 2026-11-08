struct PoolEntry {
    int first;
    int second;
    unsigned int id;
};

extern struct PoolEntry *func_125720(void);
extern int func_0292E8(void *stream, int mode, int unused0, int unused1);
extern void func_125708(unsigned int *words);

unsigned int func_1257F0(void *stream)
{
    struct PoolEntry *entry = func_125720();
    if (entry != 0) {
        int handle = func_0292E8(stream, 1, 0, 0) + 1;
        entry->first = handle;
        if (handle != 0) {
            entry->second = 1;
            return entry->id;
        }
        func_125708((unsigned int *)entry);
    }
    return 0xffffffffu;
}
