extern char D_00254D30[];
extern void func_092508(void);
extern void func_08FAD0(void *);
extern void func_0277C8(int, void *, int);

void func_08F3C0(int *record, char *control, void (*callback)(void *), void *context)
{
    unsigned int flags = (unsigned int)record[1];
    record[1] = flags | 4;
    func_092508();
    func_08FAD0(record);
    record[1] = flags;
    if (callback != 0)
        callback(context);
    func_0277C8(record[0], D_00254D30, *(int *)(control + 4) * 3);
}
