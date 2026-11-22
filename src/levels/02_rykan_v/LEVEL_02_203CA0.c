/* LEVEL_02:0x203CA0 -- placement copy of FRONTEND_0257E8.c. */
extern char D_003B0FC0[];
extern char D_00242BB0[];
extern char D_003B0F48[];

int func_202FC0(void);
void func_2029C8(void *, int, int);

void *func_203CA0(void)
{
    if (*(int *)D_003B0FC0 == 0)
    {
        func_202FC0();
        func_2029C8((void *)D_003B0FC0, (int)D_00242BB0, (int)D_003B0F48);
    }
    return (void *)D_003B0FC0;
}
