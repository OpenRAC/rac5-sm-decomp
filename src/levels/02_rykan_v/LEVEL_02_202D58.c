/* LEVEL_02:0x202D58 -- placement copy of FRONTEND_0257E8.c. */
extern char D_003B0F38[];
extern char D_002429D0[];
extern char D_003B0F28[];

void *func_202DE0(void);
void func_2029C8(void *, int, int);

void *func_202D58(void)
{
    if (*(int *)D_003B0F38 == 0)
    {
        func_202DE0();
        func_2029C8((void *)D_003B0F38, (int)D_002429D0, (int)D_003B0F28);
    }
    return (void *)D_003B0F38;
}
