extern char D_001D8EE0[];
extern void func_1D8190(void);
extern int func_1D87D8(int, void *, int, void *, void *, void *);

int func_1D86C0(char *record)
{
    int result = 0;
    if (record != 0) {
        short *entry = *(short **)(record + 4);
        result = func_1D87D8(*(int *)(entry + 2), D_001D8EE0, 1,
                             record + *entry, (void *)func_1D8190, record);
    }
    return result != 0;
}
