struct PoolEntry {
    int first;
    int second;
    unsigned int id;
};

extern struct PoolEntry *func_01E2F0(void);
extern int func_002768(void *stream, int mode, int unused0, int unused1);
extern void func_01E2D8(unsigned int *words);

unsigned int func_01E3C0(void *stream)
{
    struct PoolEntry *entry = func_01E2F0();
    if (entry != 0) {
        int handle = func_002768(stream, 1, 0, 0) + 1;
        entry->first = handle;
        if (handle != 0) {
            entry->second = 1;
            return entry->id;
        }
        func_01E2D8((unsigned int *)entry);
    }
    return 0xffffffffu;
}
