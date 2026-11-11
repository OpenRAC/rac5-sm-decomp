extern char D_00224FB0[];
extern void func_088590(void);
extern void func_085B58(void *);
extern void func_025FE8(int, void *, int);

void func_085448(int *record, char *control, void (*callback)(void *), void *context)
{
    unsigned int flags = (unsigned int)record[1];
    record[1] = flags | 4;
    func_088590();
    func_085B58(record);
    record[1] = flags;
    if (callback != 0)
        callback(context);
    func_025FE8(record[0], D_00224FB0, *(int *)(control + 4) * 3);
}
