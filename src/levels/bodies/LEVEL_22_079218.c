extern char *D_001555DC;
extern void func_079270(int);

void func_079218(unsigned int mask, int index)
{
    func_079270(index);
    *(unsigned int *)(D_001555DC + 0x100) =
        mask & *(unsigned int *)(D_001555DC + 0x1f8);
    func_079270(0);
}
