/* LEVEL_08:0x236D88 -- placement copy of FRONTEND_0257E8.c. */
extern char D_003EBCD0[];
extern char D_0027A780[];
extern char D_003EBC80[];

int func_235680(void);
void func_2368B8(void *, int, int);

void *func_236D88(void)
{
    if (*(int *)D_003EBCD0 == 0)
    {
        func_235680();
        func_2368B8((void *)D_003EBCD0, (int)D_0027A780, (int)D_003EBC80);
    }
    return (void *)D_003EBCD0;
}
