extern char D_00147530[];
extern void func_06AE28(void);
extern void func_0683E8(void *);
extern void func_0215F0(int, void *, int);

void func_067CD8(int *record, char *control, void (*callback)(void *), void *context)
{
    unsigned int flags = (unsigned int)record[1];
    record[1] = flags | 4;
    func_06AE28();
    func_0683E8(record);
    record[1] = flags;
    if (callback != 0)
        callback(context);
    func_0215F0(record[0], D_00147530, *(int *)(control + 4) * 3);
}
