/* LEVEL_03:0x207468 -- placement copy of FRONTEND_0257E8.c. */
extern char D_003B4170[];
extern char D_002464B8[];
extern char D_003B4148[];

int func_2069B8(void);
void func_2063C0(void *, int, int);

void *func_207468(void)
{
    if (*(int *)D_003B4170 == 0)
    {
        func_2069B8();
        func_2063C0((void *)D_003B4170, (int)D_002464B8, (int)D_003B4148);
    }
    return (void *)D_003B4170;
}
