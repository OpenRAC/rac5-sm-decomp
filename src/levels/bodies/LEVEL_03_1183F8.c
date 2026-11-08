struct PoolEntry {
    int first;
    int second;
    unsigned int id;
};

extern struct PoolEntry *func_118328(void);
extern int func_029638(void *stream, int mode, int unused0, int unused1);
extern void func_118310(unsigned int *words);

unsigned int func_1183F8(void *stream)
{
    struct PoolEntry *entry = func_118328();
    if (entry != 0) {
        int handle = func_029638(stream, 1, 0, 0) + 1;
        entry->first = handle;
        if (handle != 0) {
            entry->second = 1;
            return entry->id;
        }
        func_118310((unsigned int *)entry);
    }
    return 0xffffffffu;
}
