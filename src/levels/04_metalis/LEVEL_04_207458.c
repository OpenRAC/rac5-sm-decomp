/* LEVEL_04:0x207458 -- placement copy of FRONTEND_0257E8.c. */
extern char D_003B46A0[];
extern char D_00245D20[];
extern char D_003B4640[];

int func_205CB8(void);
void func_206EF0(void *, int, int);

void *func_207458(void)
{
    if (*(int *)D_003B46A0 == 0)
    {
        func_205CB8();
        func_206EF0((void *)D_003B46A0, (int)D_00245D20, (int)D_003B4640);
    }
    return (void *)D_003B46A0;
}
