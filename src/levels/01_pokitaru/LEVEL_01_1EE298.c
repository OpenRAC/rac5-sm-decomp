/* LEVEL_01:0x1EE298 -- placement copy of FRONTEND_0257E8.c. */
extern char D_00398FE0[];
extern char D_0022B510[];
extern char D_00398F80[];

int func_1ECAF8(void);
void func_1EDD30(void *, int, int);

void *func_1EE298(void)
{
    if (*(int *)D_00398FE0 == 0)
    {
        func_1ECAF8();
        func_1EDD30((void *)D_00398FE0, (int)D_0022B510, (int)D_00398F80);
    }
    return (void *)D_00398FE0;
}
