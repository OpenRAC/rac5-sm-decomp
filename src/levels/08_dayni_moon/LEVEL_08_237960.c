/* LEVEL_08:0x237960 -- placement copy of FRONTEND_0257E8.c. */
extern char D_003EBCF0[];
extern char D_0027A8B8[];
extern char D_003EBCC8[];

int func_236EB0(void);
void func_2368B8(void *, int, int);

void *func_237960(void)
{
    if (*(int *)D_003EBCF0 == 0)
    {
        func_236EB0();
        func_2368B8((void *)D_003EBCF0, (int)D_0027A8B8, (int)D_003EBCC8);
    }
    return (void *)D_003EBCF0;
}
