struct PoolEntry {
    int first;
    int second;
    unsigned int id;
};

extern struct PoolEntry *func_0F9EB8(void);
extern int func_026C18(void *stream, int mode, int unused0, int unused1);
extern void func_0F9EA0(unsigned int *words);

unsigned int func_0F9F88(void *stream)
{
    struct PoolEntry *entry = func_0F9EB8();
    if (entry != 0) {
        int handle = func_026C18(stream, 1, 0, 0) + 1;
        entry->first = handle;
        if (handle != 0) {
            entry->second = 1;
            return entry->id;
        }
        func_0F9EA0((unsigned int *)entry);
    }
    return 0xffffffffu;
}
