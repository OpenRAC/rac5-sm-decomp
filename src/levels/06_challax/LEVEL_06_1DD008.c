/* LEVEL_06:0x1DD008 -- placement copy of FRONTEND_0257E8.c. */
extern char D_003859F8[];
extern char D_00218220[];
extern char D_003859E8[];

void *func_1DD090(void);
void func_1DCC78(void *, int, int);

void *func_1DD008(void)
{
    if (*(int *)D_003859F8 == 0)
    {
        func_1DD090();
        func_1DCC78((void *)D_003859F8, (int)D_00218220, (int)D_003859E8);
    }
    return (void *)D_003859F8;
}
