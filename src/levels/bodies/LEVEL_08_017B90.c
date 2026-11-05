extern unsigned int D_00237E28;

void func_017B90(unsigned int set, unsigned int clear)
{
    D_00237E28 = (D_00237E28 & ~clear) | set;
}
