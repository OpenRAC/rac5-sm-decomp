/* LEVEL_08:0x237B20 -- placement copy of FRONTEND_0257E8.c. */
extern char D_003EBD30[];
extern char D_0027A918[];
extern char D_003EBCC8[];

int func_236EB0(void);
void func_2368B8(void *, int, int);

void *func_237B20(void)
{
    if (*(int *)D_003EBD30 == 0)
    {
        func_236EB0();
        func_2368B8((void *)D_003EBD30, (int)D_0027A918, (int)D_003EBCC8);
    }
    return (void *)D_003EBD30;
}
