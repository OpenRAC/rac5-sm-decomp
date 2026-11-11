struct PoolEntry {
    int first;
    int second;
    unsigned int id;
};

extern struct PoolEntry *func_1161D8(void);
extern int func_0284B8(void *stream, int mode, int unused0, int unused1);
extern void func_1161C0(unsigned int *words);

unsigned int func_1162A8(void *stream)
{
    struct PoolEntry *entry = func_1161D8();
    if (entry != 0) {
        int handle = func_0284B8(stream, 1, 0, 0) + 1;
        entry->first = handle;
        if (handle != 0) {
            entry->second = 1;
            return entry->id;
        }
        func_1161C0((unsigned int *)entry);
    }
    return 0xffffffffu;
}
