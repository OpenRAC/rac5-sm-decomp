struct PoolEntry {
    int first;
    int second;
    unsigned int id;
};

extern struct PoolEntry *func_0DE518(void);
extern int func_023018(void *stream, int mode, int unused0, int unused1);
extern void func_0DE500(unsigned int *words);

unsigned int func_0DE5E8(void *stream)
{
    struct PoolEntry *entry = func_0DE518();
    if (entry != 0) {
        int handle = func_023018(stream, 1, 0, 0) + 1;
        entry->first = handle;
        if (handle != 0) {
            entry->second = 1;
            return entry->id;
        }
        func_0DE500((unsigned int *)entry);
    }
    return 0xffffffffu;
}
