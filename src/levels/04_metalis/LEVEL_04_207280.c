/* LEVEL_04:0x207280 -- placement copy of FRONTEND_0257E8.c. */
extern char D_003B4678[];
extern char D_00245CE0[];
extern char D_003B4668[];

void *func_207308(void);
void func_206EF0(void *, int, int);

void *func_207280(void)
{
    if (*(int *)D_003B4678 == 0)
    {
        func_207308();
        func_206EF0((void *)D_003B4678, (int)D_00245CE0, (int)D_003B4668);
    }
    return (void *)D_003B4678;
}
