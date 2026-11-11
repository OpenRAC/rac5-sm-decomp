extern char D_0023D830[];
extern void func_08BC10(void);
extern void func_0891D8(void *);
extern void func_026FE0(int, void *, int);

void func_088A90(int *record, char *control, void (*callback)(void *), void *context)
{
    unsigned int flags = (unsigned int)record[1];
    record[1] = flags | 4;
    func_08BC10();
    func_0891D8(record);
    record[1] = flags;
    if (callback != 0)
        callback(context);
    func_026FE0(record[0], D_0023D830, *(int *)(control + 4) * 3);
}
