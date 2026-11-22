/* LEVEL_02:0x203A70 -- placement copy of FRONTEND_0257E8.c. */
extern char D_003B0F70[];
extern char D_00242B38[];
extern char D_003B0F48[];

int func_202FC0(void);
void func_2029C8(void *, int, int);

void *func_203A70(void)
{
    if (*(int *)D_003B0F70 == 0)
    {
        func_202FC0();
        func_2029C8((void *)D_003B0F70, (int)D_00242B38, (int)D_003B0F48);
    }
    return (void *)D_003B0F70;
}
