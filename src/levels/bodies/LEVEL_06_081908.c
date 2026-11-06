extern char D_0022A5B0[];
extern void func_084A50(void);
extern void func_082018(void *);
extern void func_025490(int, void *, int);

void func_081908(int *record, char *control, void (*callback)(void *), void *context)
{
    unsigned int flags = (unsigned int)record[1];
    record[1] = flags | 4;
    func_084A50();
    func_082018(record);
    record[1] = flags;
    if (callback != 0)
        callback(context);
    func_025490(record[0], D_0022A5B0, *(int *)(control + 4) * 3);
}
