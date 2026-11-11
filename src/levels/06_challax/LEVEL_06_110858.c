struct PoolEntry {
    int first;
    int second;
    unsigned int id;
};

extern struct PoolEntry *func_110788(void);
extern int func_027C28(void *stream, int mode, int unused0, int unused1);
extern void func_110770(unsigned int *words);

unsigned int func_110858(void *stream)
{
    struct PoolEntry *entry = func_110788();
    if (entry != 0) {
        int handle = func_027C28(stream, 1, 0, 0) + 1;
        entry->first = handle;
        if (handle != 0) {
            entry->second = 1;
            return entry->id;
        }
        func_110770((unsigned int *)entry);
    }
    return 0xffffffffu;
}
