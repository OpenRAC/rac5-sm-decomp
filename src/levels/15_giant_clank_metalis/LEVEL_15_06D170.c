extern char D_001858B0[];
extern void func_0702B8(void);
extern void func_06D880(void *);
extern void func_020FD0(int, void *, int);

void func_06D170(int *record, char *control, void (*callback)(void *), void *context)
{
    unsigned int flags = (unsigned int)record[1];
    record[1] = flags | 4;
    func_0702B8();
    func_06D880(record);
    record[1] = flags;
    if (callback != 0)
        callback(context);
    func_020FD0(record[0], D_001858B0, *(int *)(control + 4) * 3);
}
