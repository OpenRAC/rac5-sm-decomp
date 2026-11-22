/* LEVEL_04:0x2081C8 -- placement copy of FRONTEND_0257E8.c. */
extern char D_003B4700[];
extern char D_00245EC0[];
extern char D_003B4688[];

int func_2074E8(void);
void func_206EF0(void *, int, int);

void *func_2081C8(void)
{
    if (*(int *)D_003B4700 == 0)
    {
        func_2074E8();
        func_206EF0((void *)D_003B4700, (int)D_00245EC0, (int)D_003B4688);
    }
    return (void *)D_003B4700;
}
