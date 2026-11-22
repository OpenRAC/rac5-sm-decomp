/* LEVEL_23:0x1C1470 -- placement copy of FRONTEND_0257E8.c. */
extern char D_00366DD8[];
extern char D_001F8938[];
extern char D_00366DE8[];

void *func_1C1588(void);
void func_1C1170(void *, int, int);

void *func_1C1470(void)
{
    if (*(int *)D_00366DD8 == 0)
    {
        func_1C1588();
        func_1C1170((void *)D_00366DD8, (int)D_001F8938, (int)D_00366DE8);
    }
    return (void *)D_00366DD8;
}
