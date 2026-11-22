/* FRONTEND:0x026C70 -- placement copy of FRONTEND_0257E8.c. */
extern char D_001EF398[];
extern char D_0010A1E0[];
extern char D_001EF388[];

void *func_026CF8(void);
void func_0268E0(void *, int, int);

void *func_026C70(void)
{
    if (*(int *)D_001EF398 == 0)
    {
        func_026CF8();
        func_0268E0((void *)D_001EF398, (int)D_0010A1E0, (int)D_001EF388);
    }
    return (void *)D_001EF398;
}
