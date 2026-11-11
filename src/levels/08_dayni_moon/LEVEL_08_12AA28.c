struct PoolEntry {
    int first;
    int second;
    unsigned int id;
};

extern struct PoolEntry *func_12A958(void);
extern int func_029DB8(void *stream, int mode, int unused0, int unused1);
extern void func_12A940(unsigned int *words);

unsigned int func_12AA28(void *stream)
{
    struct PoolEntry *entry = func_12A958();
    if (entry != 0) {
        int handle = func_029DB8(stream, 1, 0, 0) + 1;
        entry->first = handle;
        if (handle != 0) {
            entry->second = 1;
            return entry->id;
        }
        func_12A940((unsigned int *)entry);
    }
    return 0xffffffffu;
}
