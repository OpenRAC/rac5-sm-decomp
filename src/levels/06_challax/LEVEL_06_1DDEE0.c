/* LEVEL_06:0x1DDEE0 -- placement copy of FRONTEND_0257E8.c. */
extern char D_00385A70[];
extern char D_002183E8[];
extern char D_00385A08[];

int func_1DD270(void);
void func_1DCC78(void *, int, int);

void *func_1DDEE0(void)
{
    if (*(int *)D_00385A70 == 0)
    {
        func_1DD270();
        func_1DCC78((void *)D_00385A70, (int)D_002183E8, (int)D_00385A08);
    }
    return (void *)D_00385A70;
}
