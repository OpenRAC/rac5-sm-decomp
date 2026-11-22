/* FRONTEND:0x0279F8 -- placement copy of FRONTEND_0257E8.c. */
extern char D_001EF3E0[];
extern char D_0010A360[];
extern char D_001EF3A8[];

int func_026ED8(void);
void func_0268E0(void *, int, int);

void *func_0279F8(void)
{
    if (*(int *)D_001EF3E0 == 0)
    {
        func_026ED8();
        func_0268E0((void *)D_001EF3E0, (int)D_0010A360, (int)D_001EF3A8);
    }
    return (void *)D_001EF3E0;
}
