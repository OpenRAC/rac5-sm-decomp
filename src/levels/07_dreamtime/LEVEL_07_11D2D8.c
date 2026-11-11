struct PoolEntry {
    int first;
    int second;
    unsigned int id;
};

extern struct PoolEntry *func_11D208(void);
extern int func_029B80(void *stream, int mode, int unused0, int unused1);
extern void func_11D1F0(unsigned int *words);

unsigned int func_11D2D8(void *stream)
{
    struct PoolEntry *entry = func_11D208();
    if (entry != 0) {
        int handle = func_029B80(stream, 1, 0, 0) + 1;
        entry->first = handle;
        if (handle != 0) {
            entry->second = 1;
            return entry->id;
        }
        func_11D1F0((unsigned int *)entry);
    }
    return 0xffffffffu;
}
