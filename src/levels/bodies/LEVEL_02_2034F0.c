extern char D_00203D10[];
extern void func_202FC0(void);
extern int func_203608(int, void *, int, void *, void *, void *);

int func_2034F0(char *record)
{
    int result = 0;
    if (record != 0) {
        short *entry = *(short **)(record + 4);
        result = func_203608(*(int *)(entry + 2), D_00203D10, 1,
                             record + *entry, (void *)func_202FC0, record);
    }
    return result != 0;
}
