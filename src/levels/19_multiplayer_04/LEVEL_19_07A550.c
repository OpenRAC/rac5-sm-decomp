extern char D_001F3E30[];
extern void func_07D6A0(void);
extern void func_07AC60(void *);
extern void func_024620(int, void *, int);

void func_07A550(int *record, char *control, void (*callback)(void *), void *context)
{
    unsigned int flags = (unsigned int)record[1];
    record[1] = flags | 4;
    func_07D6A0();
    func_07AC60(record);
    record[1] = flags;
    if (callback != 0)
        callback(context);
    func_024620(record[0], D_001F3E30, *(int *)(control + 4) * 3);
}
