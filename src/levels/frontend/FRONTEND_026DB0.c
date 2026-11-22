/* FRONTEND:0x026DB0 -- placement copy of FRONTEND_0257E8.c. */
extern char D_001EF3B0[];
extern char D_0010A210[];
extern char D_001EF370[];

int func_025880(void);
void func_0268E0(void *, int, int);

void *func_026DB0(void)
{
    if (*(int *)D_001EF3B0 == 0)
    {
        func_025880();
        func_0268E0((void *)D_001EF3B0, (int)D_0010A210, (int)D_001EF370);
    }
    return (void *)D_001EF3B0;
}
