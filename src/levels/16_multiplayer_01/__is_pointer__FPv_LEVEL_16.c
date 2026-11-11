extern char D_0019AB18[];
extern void func_199DC8(void);
extern int func_19A410(int, void *, int, void *, void *, void *);

int __is_pointer__FPv(char *record)
{
    int result = 0;
    if (record != 0) {
        short *entry = *(short **)(record + 4);
        result = func_19A410(*(int *)(entry + 2), D_0019AB18, 1,
                             record + *entry, (void *)func_199DC8, record);
    }
    return result != 0;
}
