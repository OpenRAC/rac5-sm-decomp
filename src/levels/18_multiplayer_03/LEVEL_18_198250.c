struct FourWords
{
    int first;
    int second;
    int third;
    int fourth;
};
extern void func_197FE8(struct FourWords *);

void func_198250(int first, int second, int third, int fourth)
{
    struct FourWords values;
    values.first = first;
    values.second = second;
    values.third = third;
    values.fourth = fourth;
    func_197FE8(&values);
}
