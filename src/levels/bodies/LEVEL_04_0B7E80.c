/* LEVEL_04:0x0B7E80 -- stores a value, calls a helper, then stores a masked byte. */
extern int D_0021574C;
extern int D_00215744;
extern int func_0B7E70(void);

void func_0B7E80(int first, unsigned int second)
{
    int masked = second & 0xff;
    D_0021574C = first;
    func_0B7E70();
    D_00215744 = masked;
}
