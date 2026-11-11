extern char D_002033F0[];
extern void func_2026A0(void);
extern int func_202CE8(int, void *, int, void *, void *, void *);

int __is_pointer__FPv(char *record)
{
    int result = 0;
    if (record != 0) {
        short *entry = *(short **)(record + 4);
        result = func_202CE8(*(int *)(entry + 2), D_002033F0, 1,
                             record + *entry, (void *)func_2026A0, record);
    }
    return result != 0;
}
