extern int func_022270(int, int);
extern int func_0214F8(unsigned int a0, unsigned int a1, int a2);

void func_021558(unsigned int first, int second)
{
    int value = ((int (*)(void))func_022270)();
    func_0214F8(first, value + 1, second);
}
