/* LEVEL_20:0x0FD088 -- placement copy of FRONTEND_0257E8.c. */
extern char D_00206310[];
extern char D_00131CD8[];
extern char D_002062C8[];

int func_0FC4F8(void);
void func_0FBF00(void *, int, int);

void *func_0FD088(void)
{
    if (*(int *)D_00206310 == 0)
    {
        func_0FC4F8();
        func_0FBF00((void *)D_00206310, (int)D_00131CD8, (int)D_002062C8);
    }
    return (void *)D_00206310;
}
