/* LEVEL_02:0x202CC8 -- placement copy of FRONTEND_0257E8.c. */
extern char D_003B0F18[];
extern char D_002429B8[];
extern char D_003B0F28[];

void *func_202DE0(void);
void func_2029C8(void *, int, int);

void *func_202CC8(void)
{
    if (*(int *)D_003B0F18 == 0)
    {
        func_202DE0();
        func_2029C8((void *)D_003B0F18, (int)D_002429B8, (int)D_003B0F28);
    }
    return (void *)D_003B0F18;
}
