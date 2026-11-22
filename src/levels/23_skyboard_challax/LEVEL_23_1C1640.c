/* LEVEL_23:0x1C1640 -- placement copy of FRONTEND_0257E8.c. */
extern char D_00366E10[];
extern char D_001F8980[];
extern char D_00366DC0[];

int func_1BFF38(void);
void func_1C1170(void *, int, int);

void *func_1C1640(void)
{
    if (*(int *)D_00366E10 == 0)
    {
        func_1BFF38();
        func_1C1170((void *)D_00366E10, (int)D_001F8980, (int)D_00366DC0);
    }
    return (void *)D_00366E10;
}
