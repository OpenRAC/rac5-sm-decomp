/* LEVEL_24:0x1BEF70 -- placement copy of FRONTEND_0257E8.c. */
extern char D_00362D20[];
extern char D_001F73C0[];
extern char D_00362CC0[];

int func_1BD7D0(void);
void func_1BEA08(void *, int, int);

void *func_1BEF70(void)
{
    if (*(int *)D_00362D20 == 0)
    {
        func_1BD7D0();
        func_1BEA08((void *)D_00362D20, (int)D_001F73C0, (int)D_00362CC0);
    }
    return (void *)D_00362D20;
}
