extern char D_00143D70[];
extern void func_143020(void);
extern int func_143668(int, void *, int, void *, void *, void *);

int func_143550(char *record)
{
    int result = 0;
    if (record != 0) {
        short *entry = *(short **)(record + 4);
        result = func_143668(*(int *)(entry + 2), D_00143D70, 1,
                             record + *entry, (void *)func_143020, record);
    }
    return result != 0;
}
