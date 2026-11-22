/* LEVEL_02:0x203AE0 -- placement copy of FRONTEND_0257E8.c. */
extern char D_003B0F80[];
extern char D_00242B50[];
extern char D_003B0F48[];

int func_202FC0(void);
void func_2029C8(void *, int, int);

void *func_203AE0(void)
{
    if (*(int *)D_003B0F80 == 0)
    {
        func_202FC0();
        func_2029C8((void *)D_003B0F80, (int)D_00242B50, (int)D_003B0F48);
    }
    return (void *)D_003B0F80;
}
