/* LEVEL_23:0x1C23D8 -- placement copy of FRONTEND_0257E8.c. */
extern char D_00366E70[];
extern char D_001F8B18[];
extern char D_00366E08[];

int func_1C1768(void);
void func_1C1170(void *, int, int);

void *func_1C23D8(void)
{
    if (*(int *)D_00366E70 == 0)
    {
        func_1C1768();
        func_1C1170((void *)D_00366E70, (int)D_001F8B18, (int)D_00366E08);
    }
    return (void *)D_00366E70;
}
