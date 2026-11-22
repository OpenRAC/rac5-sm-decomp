/* LEVEL_24:0x1BED98 -- placement copy of FRONTEND_0257E8.c. */
extern char D_00362CF8[];
extern char D_001F7380[];
extern char D_00362CE8[];

void *func_1BEE20(void);
void func_1BEA08(void *, int, int);

void *func_1BED98(void)
{
    if (*(int *)D_00362CF8 == 0)
    {
        func_1BEE20();
        func_1BEA08((void *)D_00362CF8, (int)D_001F7380, (int)D_00362CE8);
    }
    return (void *)D_00362CF8;
}
