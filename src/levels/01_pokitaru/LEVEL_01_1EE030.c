/* LEVEL_01:0x1EE030 -- placement copy of FRONTEND_0257E8.c. */
extern char D_00398F98[];
extern char D_0022B4B8[];
extern char D_00398FA8[];

void *func_1EE148(void);
void func_1EDD30(void *, int, int);

void *func_1EE030(void)
{
    if (*(int *)D_00398F98 == 0)
    {
        func_1EE148();
        func_1EDD30((void *)D_00398F98, (int)D_0022B4B8, (int)D_00398FA8);
    }
    return (void *)D_00398F98;
}
