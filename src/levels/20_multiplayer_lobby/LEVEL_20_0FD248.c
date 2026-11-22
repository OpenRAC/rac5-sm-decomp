/* LEVEL_20:0x0FD248 -- placement copy of FRONTEND_0257E8.c. */
extern char D_00206350[];
extern char D_00131D38[];
extern char D_002062C8[];

int func_0FC4F8(void);
void func_0FBF00(void *, int, int);

void *func_0FD248(void)
{
    if (*(int *)D_00206350 == 0)
    {
        func_0FC4F8();
        func_0FBF00((void *)D_00206350, (int)D_00131D38, (int)D_002062C8);
    }
    return (void *)D_00206350;
}
