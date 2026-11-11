extern char D_00237C00[];
extern void func_236EB0(void);
extern int func_2374F8(int, void *, int, void *, void *, void *);

int func_2373E0(char *record)
{
    int result = 0;
    if (record != 0) {
        short *entry = *(short **)(record + 4);
        result = func_2374F8(*(int *)(entry + 2), D_00237C00, 1,
                             record + *entry, (void *)func_236EB0, record);
    }
    return result != 0;
}
