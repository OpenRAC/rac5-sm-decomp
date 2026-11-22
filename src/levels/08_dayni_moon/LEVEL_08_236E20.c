/* LEVEL_08:0x236E20 -- placement copy of FRONTEND_0257E8.c. */
extern char D_003EBCE0[];
extern char D_0027A790[];
extern char D_003EBC80[];

int func_235680(void);
void func_2368B8(void *, int, int);

void *func_236E20(void)
{
    if (*(int *)D_003EBCE0 == 0)
    {
        func_235680();
        func_2368B8((void *)D_003EBCE0, (int)D_0027A790, (int)D_003EBC80);
    }
    return (void *)D_003EBCE0;
}
