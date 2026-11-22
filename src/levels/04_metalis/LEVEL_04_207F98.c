/* LEVEL_04:0x207F98 -- placement copy of FRONTEND_0257E8.c. */
extern char D_003B46B0[];
extern char D_00245E48[];
extern char D_003B4688[];

int func_2074E8(void);
void func_206EF0(void *, int, int);

void *func_207F98(void)
{
    if (*(int *)D_003B46B0 == 0)
    {
        func_2074E8();
        func_206EF0((void *)D_003B46B0, (int)D_00245E48, (int)D_003B4688);
    }
    return (void *)D_003B46B0;
}
