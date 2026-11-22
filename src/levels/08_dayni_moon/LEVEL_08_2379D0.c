/* LEVEL_08:0x2379D0 -- placement copy of FRONTEND_0257E8.c. */
extern char D_003EBD00[];
extern char D_0027A8D0[];
extern char D_003EBCC8[];

int func_236EB0(void);
void func_2368B8(void *, int, int);

void *func_2379D0(void)
{
    if (*(int *)D_003EBD00 == 0)
    {
        func_236EB0();
        func_2368B8((void *)D_003EBD00, (int)D_0027A8D0, (int)D_003EBCC8);
    }
    return (void *)D_003EBD00;
}
