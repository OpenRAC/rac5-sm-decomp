/* LEVEL_03:0x207698 -- placement copy of FRONTEND_0257E8.c. */
extern char D_003B41C0[];
extern char D_00246530[];
extern char D_003B4148[];

int func_2069B8(void);
void func_2063C0(void *, int, int);

void *func_207698(void)
{
    if (*(int *)D_003B41C0 == 0)
    {
        func_2069B8();
        func_2063C0((void *)D_003B41C0, (int)D_00246530, (int)D_003B4148);
    }
    return (void *)D_003B41C0;
}
