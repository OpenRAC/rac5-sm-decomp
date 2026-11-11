extern char D_000FD248[];
extern void func_0FC4F8(void);
extern int func_0FCB40(int, void *, int, void *, void *, void *);

int func_0FCA28(char *record)
{
    int result = 0;
    if (record != 0) {
        short *entry = *(short **)(record + 4);
        result = func_0FCB40(*(int *)(entry + 2), D_000FD248, 1,
                             record + *entry, (void *)func_0FC4F8, record);
    }
    return result != 0;
}
