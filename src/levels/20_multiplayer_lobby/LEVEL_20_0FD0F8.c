/* LEVEL_20:0x0FD0F8 -- placement copy of FRONTEND_0257E8.c. */
extern char D_00206320[];
extern char D_00131CF0[];
extern char D_002062C8[];

int func_0FC4F8(void);
void func_0FBF00(void *, int, int);

void *func_0FD0F8(void)
{
    if (*(int *)D_00206320 == 0)
    {
        func_0FC4F8();
        func_0FBF00((void *)D_00206320, (int)D_00131CF0, (int)D_002062C8);
    }
    return (void *)D_00206320;
}
