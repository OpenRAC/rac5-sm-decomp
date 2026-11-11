extern char D_001C24B8[];
extern void func_1C1768(void);
extern int func_1C1DB0(int, void *, int, void *, void *, void *);

int __is_pointer__FPv(char *record)
{
    int result = 0;
    if (record != 0) {
        short *entry = *(short **)(record + 4);
        result = func_1C1DB0(*(int *)(entry + 2), D_001C24B8, 1,
                             record + *entry, (void *)func_1C1768, record);
    }
    return result != 0;
}
