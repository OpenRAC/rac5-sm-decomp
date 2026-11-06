extern char D_0020ECB0[];
extern void func_081A98(void);
extern void func_07F060(void *);
extern void func_024D38(int, void *, int);

void func_07E950(int *record, char *control, void (*callback)(void *), void *context)
{
    unsigned int flags = (unsigned int)record[1];
    record[1] = flags | 4;
    func_081A98();
    func_07F060(record);
    record[1] = flags;
    if (callback != 0)
        callback(context);
    func_024D38(record[0], D_0020ECB0, *(int *)(control + 4) * 3);
}
