struct PoolEntry {
    int first;
    int second;
    unsigned int id;
};

extern struct PoolEntry *func_110420(void);
extern int func_026D80(void *stream, int mode, int unused0, int unused1);
extern void func_110408(unsigned int *words);

unsigned int func_1104F0(void *stream)
{
    struct PoolEntry *entry = func_110420();
    if (entry != 0) {
        int handle = func_026D80(stream, 1, 0, 0) + 1;
        entry->first = handle;
        if (handle != 0) {
            entry->second = 1;
            return entry->id;
        }
        func_110408((unsigned int *)entry);
    }
    return 0xffffffffu;
}
