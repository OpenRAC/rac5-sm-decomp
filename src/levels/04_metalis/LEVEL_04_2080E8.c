/* LEVEL_04:0x2080E8 -- placement copy of FRONTEND_0257E8.c. */
extern char D_003B46E0[];
extern char D_00245E90[];
extern char D_003B4688[];

int func_2074E8(void);
void func_206EF0(void *, int, int);

void *func_2080E8(void)
{
    if (*(int *)D_003B46E0 == 0)
    {
        func_2074E8();
        func_206EF0((void *)D_003B46E0, (int)D_00245E90, (int)D_003B4688);
    }
    return (void *)D_003B46E0;
}
