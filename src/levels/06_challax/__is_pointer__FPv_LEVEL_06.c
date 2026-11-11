extern char D_001DDFC0[];
extern void func_1DD270(void);
extern int func_1DD8B8(int, void *, int, void *, void *, void *);

int __is_pointer__FPv(char *record)
{
    int result = 0;
    if (record != 0) {
        short *entry = *(short **)(record + 4);
        result = func_1DD8B8(*(int *)(entry + 2), D_001DDFC0, 1,
                             record + *entry, (void *)func_1DD270, record);
    }
    return result != 0;
}
