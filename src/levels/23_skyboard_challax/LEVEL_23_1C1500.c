/* LEVEL_23:0x1C1500 -- placement copy of FRONTEND_0257E8.c. */
extern char D_00366DF8[];
extern char D_001F8950[];
extern char D_00366DE8[];

void *func_1C1588(void);
void func_1C1170(void *, int, int);

void *func_1C1500(void)
{
    if (*(int *)D_00366DF8 == 0)
    {
        func_1C1588();
        func_1C1170((void *)D_00366DF8, (int)D_001F8950, (int)D_00366DE8);
    }
    return (void *)D_00366DF8;
}
