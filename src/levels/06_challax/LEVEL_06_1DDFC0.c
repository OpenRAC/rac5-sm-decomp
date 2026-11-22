/* LEVEL_06:0x1DDFC0 -- placement copy of FRONTEND_0257E8.c. */
extern char D_00385A90[];
extern char D_00218418[];
extern char D_00385A08[];

int func_1DD270(void);
void func_1DCC78(void *, int, int);

void *func_1DDFC0(void)
{
    if (*(int *)D_00385A90 == 0)
    {
        func_1DD270();
        func_1DCC78((void *)D_00385A90, (int)D_00218418, (int)D_00385A08);
    }
    return (void *)D_00385A90;
}
