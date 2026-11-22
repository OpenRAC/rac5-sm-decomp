/* LEVEL_02:0x203C30 -- placement copy of FRONTEND_0257E8.c. */
extern char D_003B0FB0[];
extern char D_00242B98[];
extern char D_003B0F48[];

int func_202FC0(void);
void func_2029C8(void *, int, int);

void *func_203C30(void)
{
    if (*(int *)D_003B0FB0 == 0)
    {
        func_202FC0();
        func_2029C8((void *)D_003B0FB0, (int)D_00242B98, (int)D_003B0F48);
    }
    return (void *)D_003B0FB0;
}
