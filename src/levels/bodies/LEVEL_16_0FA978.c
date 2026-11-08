struct PoolEntry {
    int first;
    int second;
    unsigned int id;
};

extern struct PoolEntry *func_0FA8A8(void);
extern int func_027298(void *stream, int mode, int unused0, int unused1);
extern void func_0FA890(unsigned int *words);

unsigned int func_0FA978(void *stream)
{
    struct PoolEntry *entry = func_0FA8A8();
    if (entry != 0) {
        int handle = func_027298(stream, 1, 0, 0) + 1;
        entry->first = handle;
        if (handle != 0) {
            entry->second = 1;
            return entry->id;
        }
        func_0FA890((unsigned int *)entry);
    }
    return 0xffffffffu;
}
