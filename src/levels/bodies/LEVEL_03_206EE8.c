extern char D_00207708[];
extern void func_2069B8(void);
extern int func_207000(int, void *, int, void *, void *, void *);

int func_206EE8(char *record)
{
    int result = 0;
    if (record != 0) {
        short *entry = *(short **)(record + 4);
        result = func_207000(*(int *)(entry + 2), D_00207708, 1,
                             record + *entry, (void *)func_2069B8, record);
    }
    return result != 0;
}
