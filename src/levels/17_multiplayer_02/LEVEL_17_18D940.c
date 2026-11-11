extern char D_0018E160[];
extern void func_18D410(void);
extern int func_18DA58(int, void *, int, void *, void *, void *);

int func_18D940(char *record)
{
    int result = 0;
    if (record != 0) {
        short *entry = *(short **)(record + 4);
        result = func_18DA58(*(int *)(entry + 2), D_0018E160, 1,
                             record + *entry, (void *)func_18D410, record);
    }
    return result != 0;
}
