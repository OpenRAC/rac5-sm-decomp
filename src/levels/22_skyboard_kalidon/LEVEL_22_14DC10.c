extern char D_0014E430[];
extern void func_14D6E0(void);
extern int func_14DD28(int, void *, int, void *, void *, void *);

int func_14DC10(char *record)
{
    int result = 0;
    if (record != 0) {
        short *entry = *(short **)(record + 4);
        result = func_14DD28(*(int *)(entry + 2), D_0014E430, 1,
                             record + *entry, (void *)func_14D6E0, record);
    }
    return result != 0;
}
