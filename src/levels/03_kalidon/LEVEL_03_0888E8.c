extern char D_002586B0[];
extern void func_08BA30(void);
extern void func_088FF8(void *);
extern void func_026EC0(int, void *, int);

void func_0888E8(int *record, char *control, void (*callback)(void *), void *context)
{
    unsigned int flags = (unsigned int)record[1];
    record[1] = flags | 4;
    func_08BA30();
    func_088FF8(record);
    record[1] = flags;
    if (callback != 0)
        callback(context);
    func_026EC0(record[0], D_002586B0, *(int *)(control + 4) * 3);
}
