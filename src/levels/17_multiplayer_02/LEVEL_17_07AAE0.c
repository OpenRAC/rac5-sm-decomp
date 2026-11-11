extern char D_001E4FB0[];
extern void func_07DC30(void);
extern void func_07B1F0(void *);
extern void func_0243F8(int, void *, int);

void func_07AAE0(int *record, char *control, void (*callback)(void *), void *context)
{
    unsigned int flags = (unsigned int)record[1];
    record[1] = flags | 4;
    func_07DC30();
    func_07B1F0(record);
    record[1] = flags;
    if (callback != 0)
        callback(context);
    func_0243F8(record[0], D_001E4FB0, *(int *)(control + 4) * 3);
}
