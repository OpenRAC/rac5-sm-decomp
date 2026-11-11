extern char D_00253130[];
extern void func_08DCA8(void);
extern void func_08B270(void *);
extern void func_027340(int, void *, int);

void func_08AB60(int *record, char *control, void (*callback)(void *), void *context)
{
    unsigned int flags = (unsigned int)record[1];
    record[1] = flags | 4;
    func_08DCA8();
    func_08B270(record);
    record[1] = flags;
    if (callback != 0)
        callback(context);
    func_027340(record[0], D_00253130, *(int *)(control + 4) * 3);
}
