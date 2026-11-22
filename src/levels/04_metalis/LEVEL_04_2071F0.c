/* LEVEL_04:0x2071F0 -- placement copy of FRONTEND_0257E8.c. */
extern char D_003B4658[];
extern char D_00245CC8[];
extern char D_003B4668[];

void *func_207308(void);
void func_206EF0(void *, int, int);

void *func_2071F0(void)
{
    if (*(int *)D_003B4658 == 0)
    {
        func_207308();
        func_206EF0((void *)D_003B4658, (int)D_00245CC8, (int)D_003B4668);
    }
    return (void *)D_003B4658;
}
