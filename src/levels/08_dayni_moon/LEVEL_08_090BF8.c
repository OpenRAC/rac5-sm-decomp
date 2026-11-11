extern char D_0028CAB0[];
extern void func_093D40(void);
extern void func_091308(void *);
extern void func_027608(int, void *, int);

void func_090BF8(int *record, char *control, void (*callback)(void *), void *context)
{
    unsigned int flags = (unsigned int)record[1];
    record[1] = flags | 4;
    func_093D40();
    func_091308(record);
    record[1] = flags;
    if (callback != 0)
        callback(context);
    func_027608(record[0], D_0028CAB0, *(int *)(control + 4) * 3);
}
