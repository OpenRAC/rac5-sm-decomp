extern char D_00208238[];
extern void func_2074E8(void);
extern int func_207B30(int, void *, int, void *, void *, void *);

int __is_pointer__FPv(char *record)
{
    int result = 0;
    if (record != 0) {
        short *entry = *(short **)(record + 4);
        result = func_207B30(*(int *)(entry + 2), D_00208238, 1,
                             record + *entry, (void *)func_2074E8, record);
    }
    return result != 0;
}
