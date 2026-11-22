/* LEVEL_06:0x1DDE70 -- placement copy of FRONTEND_0257E8.c. */
extern char D_00385A60[];
extern char D_002183D0[];
extern char D_00385A08[];

int func_1DD270(void);
void func_1DCC78(void *, int, int);

void *func_1DDE70(void)
{
    if (*(int *)D_00385A60 == 0)
    {
        func_1DD270();
        func_1DCC78((void *)D_00385A60, (int)D_002183D0, (int)D_00385A08);
    }
    return (void *)D_00385A60;
}
