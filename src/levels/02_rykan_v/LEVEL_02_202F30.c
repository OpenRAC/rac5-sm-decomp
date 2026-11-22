/* LEVEL_02:0x202F30 -- placement copy of FRONTEND_0257E8.c. */
extern char D_003B0F60[];
extern char D_00242A10[];
extern char D_003B0F00[];

int func_201790(void);
void func_2029C8(void *, int, int);

void *func_202F30(void)
{
    if (*(int *)D_003B0F60 == 0)
    {
        func_201790();
        func_2029C8((void *)D_003B0F60, (int)D_00242A10, (int)D_003B0F00);
    }
    return (void *)D_003B0F60;
}
