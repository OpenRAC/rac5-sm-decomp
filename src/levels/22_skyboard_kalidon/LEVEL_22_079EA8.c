extern char D_00193430[];
extern void func_07CFF0(void);
extern void func_07A5B8(void *);
extern void func_021970(int, void *, int);

void func_079EA8(int *record, char *control, void (*callback)(void *), void *context)
{
    unsigned int flags = (unsigned int)record[1];
    record[1] = flags | 4;
    func_07CFF0();
    func_07A5B8(record);
    record[1] = flags;
    if (callback != 0)
        callback(context);
    func_021970(record[0], D_00193430, *(int *)(control + 4) * 3);
}
