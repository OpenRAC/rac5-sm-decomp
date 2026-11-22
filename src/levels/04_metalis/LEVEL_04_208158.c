/* LEVEL_04:0x208158 -- placement copy of FRONTEND_0257E8.c. */
extern char D_003B46F0[];
extern char D_00245EA8[];
extern char D_003B4688[];

int func_2074E8(void);
void func_206EF0(void *, int, int);

void *func_208158(void)
{
    if (*(int *)D_003B46F0 == 0)
    {
        func_2074E8();
        func_206EF0((void *)D_003B46F0, (int)D_00245EA8, (int)D_003B4688);
    }
    return (void *)D_003B46F0;
}
