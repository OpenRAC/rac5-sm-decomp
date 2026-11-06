extern char D_001BFD50[];
extern void func_1BF000(void);
extern int func_1BF648(int, void *, int, void *, void *, void *);

int func_1BF530(char *record)
{
    int result = 0;
    if (record != 0) {
        short *entry = *(short **)(record + 4);
        result = func_1BF648(*(int *)(entry + 2), D_001BFD50, 1,
                             record + *entry, (void *)func_1BF000, record);
    }
    return result != 0;
}
