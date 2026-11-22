/* LEVEL_01:0x1EE0C0 -- placement copy of FRONTEND_0257E8.c. */
extern char D_00398FB8[];
extern char D_0022B4D0[];
extern char D_00398FA8[];

void *func_1EE148(void);
void func_1EDD30(void *, int, int);

void *func_1EE0C0(void)
{
    if (*(int *)D_00398FB8 == 0)
    {
        func_1EE148();
        func_1EDD30((void *)D_00398FB8, (int)D_0022B4D0, (int)D_00398FA8);
    }
    return (void *)D_00398FB8;
}
