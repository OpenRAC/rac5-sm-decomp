extern char D_001F80D0[];
extern void func_1F7380(void);
extern int func_1F79C8(int, void *, int, void *, void *, void *);

int __is_pointer__FPv(char *record)
{
    int result = 0;
    if (record != 0) {
        short *entry = *(short **)(record + 4);
        result = func_1F79C8(*(int *)(entry + 2), D_001F80D0, 1,
                             record + *entry, (void *)func_1F7380, record);
    }
    return result != 0;
}
