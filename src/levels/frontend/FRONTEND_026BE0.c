/* FRONTEND:0x026BE0 -- placement copy of FRONTEND_0257E8.c. */
extern char D_001EF378[];
extern char D_0010A1C8[];
extern char D_001EF388[];

void *func_026CF8(void);
void func_0268E0(void *, int, int);

void *func_026BE0(void)
{
    if (*(int *)D_001EF378 == 0)
    {
        func_026CF8();
        func_0268E0((void *)D_001EF378, (int)D_0010A1C8, (int)D_001EF388);
    }
    return (void *)D_001EF378;
}
