/* LEVEL_20:0x0FD1D8 -- placement copy of FRONTEND_0257E8.c. */
extern char D_00206340[];
extern char D_00131D20[];
extern char D_002062C8[];

int func_0FC4F8(void);
void func_0FBF00(void *, int, int);

void *func_0FD1D8(void)
{
    if (*(int *)D_00206340 == 0)
    {
        func_0FC4F8();
        func_0FBF00((void *)D_00206340, (int)D_00131D20, (int)D_002062C8);
    }
    return (void *)D_00206340;
}
