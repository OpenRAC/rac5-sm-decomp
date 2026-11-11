struct PoolEntry {
    int first;
    int second;
    unsigned int id;
};

extern struct PoolEntry *func_0F90E0(void);
extern int func_026848(void *stream, int mode, int unused0, int unused1);
extern void func_0F90C8(unsigned int *words);

unsigned int func_0F91B0(void *stream)
{
    struct PoolEntry *entry = func_0F90E0();
    if (entry != 0) {
        int handle = func_026848(stream, 1, 0, 0) + 1;
        entry->first = handle;
        if (handle != 0) {
            entry->second = 1;
            return entry->id;
        }
        func_0F90C8((unsigned int *)entry);
    }
    return 0xffffffffu;
}
