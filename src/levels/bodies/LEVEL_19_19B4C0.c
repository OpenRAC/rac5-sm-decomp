extern char D_0019BCE0[];
extern void func_19AF90(void);
extern int func_19B5D8(int, void *, int, void *, void *, void *);

int func_19B4C0(char *record)
{
    int result = 0;
    if (record != 0) {
        short *entry = *(short **)(record + 4);
        result = func_19B5D8(*(int *)(entry + 2), D_0019BCE0, 1,
                             record + *entry, (void *)func_19AF90, record);
    }
    return result != 0;
}
