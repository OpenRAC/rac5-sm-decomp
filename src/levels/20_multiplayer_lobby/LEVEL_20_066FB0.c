extern char *D_0010696C;
extern void func_067008(int);

void func_066FB0(unsigned int mask, int index)
{
    func_067008(index);
    *(unsigned int *)(D_0010696C + 0x100) =
        mask & *(unsigned int *)(D_0010696C + 0x1f8);
    func_067008(0);
}
