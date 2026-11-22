/* LEVEL_20:0x0FCFA8 -- placement copy of FRONTEND_0257E8.c. */
extern char D_002062F0[];
extern char D_00131CA8[];
extern char D_002062C8[];

int func_0FC4F8(void);
void func_0FBF00(void *, int, int);

void *func_0FCFA8(void)
{
    if (*(int *)D_002062F0 == 0)
    {
        func_0FC4F8();
        func_0FBF00((void *)D_002062F0, (int)D_00131CA8, (int)D_002062C8);
    }
    return (void *)D_002062F0;
}
