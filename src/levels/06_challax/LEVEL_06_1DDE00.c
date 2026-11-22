/* LEVEL_06:0x1DDE00 -- placement copy of FRONTEND_0257E8.c. */
extern char D_00385A50[];
extern char D_002183B8[];
extern char D_00385A08[];

int func_1DD270(void);
void func_1DCC78(void *, int, int);

void *func_1DDE00(void)
{
    if (*(int *)D_00385A50 == 0)
    {
        func_1DD270();
        func_1DCC78((void *)D_00385A50, (int)D_002183B8, (int)D_00385A08);
    }
    return (void *)D_00385A50;
}
