extern unsigned char D_001EFF50[];
extern int D_001EFF24;
extern int D_001EFF28;

void func_12E708(void);

void func_0C4608(void)
{
    if (D_001EFF50[0] != 0)
    {
        func_12E708();
    }
    D_001EFF50[0] = 0;
    D_001EFF24 = 0;
    D_001EFF28 = 0;
}
