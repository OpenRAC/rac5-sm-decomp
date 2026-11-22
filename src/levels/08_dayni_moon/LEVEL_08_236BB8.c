/* LEVEL_08:0x236BB8 -- placement copy of FRONTEND_0257E8.c. */
extern char D_003EBC98[];
extern char D_0027A738[];
extern char D_003EBCA8[];

void *func_236CD0(void);
void func_2368B8(void *, int, int);

void *func_236BB8(void)
{
    if (*(int *)D_003EBC98 == 0)
    {
        func_236CD0();
        func_2368B8((void *)D_003EBC98, (int)D_0027A738, (int)D_003EBCA8);
    }
    return (void *)D_003EBC98;
}
