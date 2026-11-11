struct PoolEntry {
    int first;
    int second;
    unsigned int id;
};

extern struct PoolEntry *func_0F4678(void);
extern int func_023DD8(void *stream, int mode, int unused0, int unused1);
extern void func_0F4660(unsigned int *words);

unsigned int func_0F4748(void *stream)
{
    struct PoolEntry *entry = func_0F4678();
    if (entry != 0) {
        int handle = func_023DD8(stream, 1, 0, 0) + 1;
        entry->first = handle;
        if (handle != 0) {
            entry->second = 1;
            return entry->id;
        }
        func_0F4660((unsigned int *)entry);
    }
    return 0xffffffffu;
}
