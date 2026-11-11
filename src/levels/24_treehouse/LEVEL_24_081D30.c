extern char D_00209730[];
extern void func_084E78(void);
extern void func_082440(void *);
extern void func_024910(int, void *, int);

void func_081D30(int *record, char *control, void (*callback)(void *), void *context)
{
    unsigned int flags = (unsigned int)record[1];
    record[1] = flags | 4;
    func_084E78();
    func_082440(record);
    record[1] = flags;
    if (callback != 0)
        callback(context);
    func_024910(record[0], D_00209730, *(int *)(control + 4) * 3);
}
