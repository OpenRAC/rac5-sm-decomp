/* LEVEL_03:0x2075B8 -- placement copy of FRONTEND_0257E8.c. */
extern char D_003B41A0[];
extern char D_00246500[];
extern char D_003B4148[];

int func_2069B8(void);
void func_2063C0(void *, int, int);

void *func_2075B8(void)
{
    if (*(int *)D_003B41A0 == 0)
    {
        func_2069B8();
        func_2063C0((void *)D_003B41A0, (int)D_00246500, (int)D_003B4148);
    }
    return (void *)D_003B41A0;
}
