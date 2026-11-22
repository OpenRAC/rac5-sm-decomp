/* LEVEL_04:0x2073C0 -- placement copy of FRONTEND_0257E8.c. */
extern char D_003B4690[];
extern char D_00245D10[];
extern char D_003B4640[];

int func_205CB8(void);
void func_206EF0(void *, int, int);

void *func_2073C0(void)
{
    if (*(int *)D_003B4690 == 0)
    {
        func_205CB8();
        func_206EF0((void *)D_003B4690, (int)D_00245D10, (int)D_003B4640);
    }
    return (void *)D_003B4690;
}
