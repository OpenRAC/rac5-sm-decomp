/* LEVEL_04:0x208238 -- placement copy of FRONTEND_0257E8.c. */
extern char D_003B4710[];
extern char D_00245ED8[];
extern char D_003B4688[];

int func_2074E8(void);
void func_206EF0(void *, int, int);

void *func_208238(void)
{
    if (*(int *)D_003B4710 == 0)
    {
        func_2074E8();
        func_206EF0((void *)D_003B4710, (int)D_00245ED8, (int)D_003B4688);
    }
    return (void *)D_003B4710;
}
