extern char *D_001FF25C;
extern void func_0881C0(int);

void func_088168(unsigned int mask, int index)
{
    func_0881C0(index);
    *(unsigned int *)(D_001FF25C + 0x100) =
        mask & *(unsigned int *)(D_001FF25C + 0x1f8);
    func_0881C0(0);
}
