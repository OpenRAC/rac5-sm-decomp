struct PoolEntry {
    int first;
    int second;
    unsigned int id;
};

extern struct PoolEntry *func_0FAAD0(void);
extern int func_026E40(void *stream, int mode, int unused0, int unused1);
extern void func_0FAAB8(unsigned int *words);

unsigned int func_0FABA0(void *stream)
{
    struct PoolEntry *entry = func_0FAAD0();
    if (entry != 0) {
        int handle = func_026E40(stream, 1, 0, 0) + 1;
        entry->first = handle;
        if (handle != 0) {
            entry->second = 1;
            return entry->id;
        }
        func_0FAAB8((unsigned int *)entry);
    }
    return 0xffffffffu;
}
