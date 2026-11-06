extern char D_0019BFB8[];
extern void func_19B268(void);
extern int func_19B8B0(int, void *, int, void *, void *, void *);

int func_19B798(char *record)
{
    int result = 0;
    if (record != 0) {
        short *entry = *(short **)(record + 4);
        result = func_19B8B0(*(int *)(entry + 2), D_0019BFB8, 1,
                             record + *entry, (void *)func_19B268, record);
    }
    return result != 0;
}
