struct PoolEntry {
    int first;
    int second;
    unsigned int id;
};

extern struct PoolEntry *func_1135A8(void);
extern int func_0286A8(void *stream, int mode, int unused0, int unused1);
extern void func_113590(unsigned int *words);

unsigned int func_113678(void *stream)
{
    struct PoolEntry *entry = func_1135A8();
    if (entry != 0) {
        int handle = func_0286A8(stream, 1, 0, 0) + 1;
        entry->first = handle;
        if (handle != 0) {
            entry->second = 1;
            return entry->id;
        }
        func_113590((unsigned int *)entry);
    }
    return 0xffffffffu;
}
