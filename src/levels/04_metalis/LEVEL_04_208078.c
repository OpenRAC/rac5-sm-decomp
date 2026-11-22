/* LEVEL_04:0x208078 -- placement copy of FRONTEND_0257E8.c. */
extern char D_003B46D0[];
extern char D_00245E78[];
extern char D_003B4688[];

int func_2074E8(void);
void func_206EF0(void *, int, int);

void *func_208078(void)
{
    if (*(int *)D_003B46D0 == 0)
    {
        func_2074E8();
        func_206EF0((void *)D_003B46D0, (int)D_00245E78, (int)D_003B4688);
    }
    return (void *)D_003B46D0;
}
