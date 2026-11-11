struct PoolEntry {
    int first;
    int second;
    unsigned int id;
};

extern struct PoolEntry *func_1183D0(void);
extern int func_029618(void *stream, int mode, int unused0, int unused1);
extern void func_1183B8(unsigned int *words);

unsigned int func_1184A0(void *stream)
{
    struct PoolEntry *entry = func_1183D0();
    if (entry != 0) {
        int handle = func_029618(stream, 1, 0, 0) + 1;
        entry->first = handle;
        if (handle != 0) {
            entry->second = 1;
            return entry->id;
        }
        func_1183B8((unsigned int *)entry);
    }
    return 0xffffffffu;
}
