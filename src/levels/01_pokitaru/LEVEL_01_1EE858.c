extern char D_001EF078[];
extern void func_1EE328(void);
extern int func_1EE970(int, void *, int, void *, void *, void *);

int func_1EE858(char *record)
{
    int result = 0;
    if (record != 0) {
        short *entry = *(short **)(record + 4);
        result = func_1EE970(*(int *)(entry + 2), D_001EF078, 1,
                             record + *entry, (void *)func_1EE328, record);
    }
    return result != 0;
}
