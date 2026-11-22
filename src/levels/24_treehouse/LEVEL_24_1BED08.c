/* LEVEL_24:0x1BED08 -- placement copy of FRONTEND_0257E8.c. */
extern char D_00362CD8[];
extern char D_001F7368[];
extern char D_00362CE8[];

void *func_1BEE20(void);
void func_1BEA08(void *, int, int);

void *func_1BED08(void)
{
    if (*(int *)D_00362CD8 == 0)
    {
        func_1BEE20();
        func_1BEA08((void *)D_00362CD8, (int)D_001F7368, (int)D_00362CE8);
    }
    return (void *)D_00362CD8;
}
