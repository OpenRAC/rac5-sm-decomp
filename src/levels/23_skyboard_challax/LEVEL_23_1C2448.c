/* LEVEL_23:0x1C2448 -- placement copy of FRONTEND_0257E8.c. */
extern char D_00366E80[];
extern char D_001F8B30[];
extern char D_00366E08[];

int func_1C1768(void);
void func_1C1170(void *, int, int);

void *func_1C2448(void)
{
    if (*(int *)D_00366E80 == 0)
    {
        func_1C1768();
        func_1C1170((void *)D_00366E80, (int)D_001F8B30, (int)D_00366E08);
    }
    return (void *)D_00366E80;
}
