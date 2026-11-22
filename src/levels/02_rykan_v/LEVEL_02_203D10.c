/* LEVEL_02:0x203D10 -- placement copy of FRONTEND_0257E8.c. */
extern char D_003B0FD0[];
extern char D_00242BC8[];
extern char D_003B0F48[];

int func_202FC0(void);
void func_2029C8(void *, int, int);

void *func_203D10(void)
{
    if (*(int *)D_003B0FD0 == 0)
    {
        func_202FC0();
        func_2029C8((void *)D_003B0FD0, (int)D_00242BC8, (int)D_003B0F48);
    }
    return (void *)D_003B0FD0;
}
