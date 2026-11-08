struct PoolEntry {
    int first;
    int second;
    unsigned int id;
};

extern struct PoolEntry *func_0D3708(void);
extern int func_023DA0(void *stream, int mode, int unused0, int unused1);
extern void func_0D36F0(unsigned int *words);

unsigned int func_0D37D8(void *stream)
{
    struct PoolEntry *entry = func_0D3708();
    if (entry != 0) {
        int handle = func_023DA0(stream, 1, 0, 0) + 1;
        entry->first = handle;
        if (handle != 0) {
            entry->second = 1;
            return entry->id;
        }
        func_0D36F0((unsigned int *)entry);
    }
    return 0xffffffffu;
}
