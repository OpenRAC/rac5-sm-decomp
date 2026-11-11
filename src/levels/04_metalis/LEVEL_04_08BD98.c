extern char D_00258030[];
extern void func_08EEE0(void);
extern void func_08C4A8(void *);
extern void func_026C70(int, void *, int);

void func_08BD98(int *record, char *control, void (*callback)(void *), void *context)
{
    unsigned int flags = (unsigned int)record[1];
    record[1] = flags | 4;
    func_08EEE0();
    func_08C4A8(record);
    record[1] = flags;
    if (callback != 0)
        callback(context);
    func_026C70(record[0], D_00258030, *(int *)(control + 4) * 3);
}
