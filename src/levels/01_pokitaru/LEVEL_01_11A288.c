struct PoolEntry {
    int first;
    int second;
    unsigned int id;
};

extern struct PoolEntry *func_11A1B8(void);
extern int func_029840(void *stream, int mode, int unused0, int unused1);
extern void func_11A1A0(unsigned int *words);

unsigned int func_11A288(void *stream)
{
    struct PoolEntry *entry = func_11A1B8();
    if (entry != 0) {
        int handle = func_029840(stream, 1, 0, 0) + 1;
        entry->first = handle;
        if (handle != 0) {
            entry->second = 1;
            return entry->id;
        }
        func_11A1A0((unsigned int *)entry);
    }
    return 0xffffffffu;
}
