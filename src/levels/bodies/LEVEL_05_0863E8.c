extern char D_002296F0[];
extern void func_089530(void);
extern void func_086AF8(void *);
extern void func_025D20(int, void *, int);

void func_0863E8(int *record, char *control, void (*callback)(void *), void *context)
{
    unsigned int flags = (unsigned int)record[1];
    record[1] = flags | 4;
    func_089530();
    func_086AF8(record);
    record[1] = flags;
    if (callback != 0)
        callback(context);
    func_025D20(record[0], D_002296F0, *(int *)(control + 4) * 3);
}
