extern char D_001F3CB0[];
extern void func_07D1B8(void);
extern void func_07A778(void *);
extern void func_024A78(int, void *, int);

void func_07A068(int *record, char *control, void (*callback)(void *), void *context)
{
    unsigned int flags = (unsigned int)record[1];
    record[1] = flags | 4;
    func_07D1B8();
    func_07A778(record);
    record[1] = flags;
    if (callback != 0)
        callback(context);
    func_024A78(record[0], D_001F3CB0, *(int *)(control + 4) * 3);
}
