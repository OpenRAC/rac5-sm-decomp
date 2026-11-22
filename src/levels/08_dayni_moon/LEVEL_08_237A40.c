/* LEVEL_08:0x237A40 -- placement copy of FRONTEND_0257E8.c. */
extern char D_003EBD10[];
extern char D_0027A8E8[];
extern char D_003EBCC8[];

int func_236EB0(void);
void func_2368B8(void *, int, int);

void *func_237A40(void)
{
    if (*(int *)D_003EBD10 == 0)
    {
        func_236EB0();
        func_2368B8((void *)D_003EBD10, (int)D_0027A8E8, (int)D_003EBCC8);
    }
    return (void *)D_003EBD10;
}
