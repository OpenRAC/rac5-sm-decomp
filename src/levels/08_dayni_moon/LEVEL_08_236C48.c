/* LEVEL_08:0x236C48 -- placement copy of FRONTEND_0257E8.c. */
extern char D_003EBCB8[];
extern char D_0027A750[];
extern char D_003EBCA8[];

void *func_236CD0(void);
void func_2368B8(void *, int, int);

void *func_236C48(void)
{
    if (*(int *)D_003EBCB8 == 0)
    {
        func_236CD0();
        func_2368B8((void *)D_003EBCB8, (int)D_0027A750, (int)D_003EBCA8);
    }
    return (void *)D_003EBCB8;
}
