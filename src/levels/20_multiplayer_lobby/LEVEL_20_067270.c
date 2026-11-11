extern void func_067008(int);
extern unsigned int func_067228(int value);

unsigned int func_067270(int first, int second)
{
    unsigned int value;
    func_067008(second);
    value = func_067228(first);
    func_067008(0);
    return value;
}
