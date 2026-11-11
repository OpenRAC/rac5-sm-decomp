extern char D_001DE470[];
extern void func_1DD720(void);
extern int func_1DDD68(int, void *, int, void *, void *, void *);

int __is_pointer__FPv(char *record)
{
    int result = 0;
    if (record != 0) {
        short *entry = *(short **)(record + 4);
        result = func_1DDD68(*(int *)(entry + 2), D_001DE470, 1,
                             record + *entry, (void *)func_1DD720, record);
    }
    return result != 0;
}
