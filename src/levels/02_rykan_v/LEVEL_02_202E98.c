/* LEVEL_02:0x202E98 -- placement copy of FRONTEND_0257E8.c. */
extern char D_003B0F50[];
extern char D_00242A00[];
extern char D_003B0F00[];

int func_201790(void);
void func_2029C8(void *, int, int);

void *func_202E98(void)
{
    if (*(int *)D_003B0F50 == 0)
    {
        func_201790();
        func_2029C8((void *)D_003B0F50, (int)D_00242A00, (int)D_003B0F00);
    }
    return (void *)D_003B0F50;
}
