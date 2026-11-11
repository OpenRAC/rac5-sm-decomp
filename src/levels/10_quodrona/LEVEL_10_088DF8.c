extern char D_00246C30[];
extern void func_08BFA8(void);
extern void func_089570(void *);
extern void func_0268C0(int, void *, int);

void func_088DF8(int *record, char *control, void (*callback)(void *), void *context)
{
    unsigned int flags = (unsigned int)record[1];
    record[1] = flags | 4;
    func_08BFA8();
    func_089570(record);
    record[1] = flags;
    if (callback != 0)
        callback(context);
    func_0268C0(record[0], D_00246C30, *(int *)(control + 4) * 3);
}
