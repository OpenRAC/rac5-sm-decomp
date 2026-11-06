extern unsigned char D_001ECA64;
extern char *D_001E2EAC;
extern unsigned char D_001F5649;
extern void func_129970(int);
extern void func_026288(void);

void func_0BAAF0(void)
{
    if (D_001ECA64 != 0)
        func_129970(*(int *)(D_001E2EAC + 0x1c6c));
    func_026288();
    D_001F5649 = 0;
}
