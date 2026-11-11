extern char D_001F4030[];
extern void func_07CB38(void);
extern void func_07A0F8(void *);
extern void func_024028(int, void *, int);

void func_0799E8(int *record, char *control, void (*callback)(void *), void *context)
{
    unsigned int flags = (unsigned int)record[1];
    record[1] = flags | 4;
    func_07CB38();
    func_07A0F8(record);
    record[1] = flags;
    if (callback != 0)
        callback(context);
    func_024028(record[0], D_001F4030, *(int *)(control + 4) * 3);
}
