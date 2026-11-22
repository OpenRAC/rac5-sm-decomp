/* LEVEL_05:0x1DE470 -- placement copy of FRONTEND_0257E8.c. */
extern char D_00390410[];
extern char D_002173C8[];
extern char D_00390388[];

int func_1DD720(void);
void func_1DD128(void *, int, int);

void *func_1DE470(void)
{
    if (*(int *)D_00390410 == 0)
    {
        func_1DD720();
        func_1DD128((void *)D_00390410, (int)D_002173C8, (int)D_00390388);
    }
    return (void *)D_00390410;
}
