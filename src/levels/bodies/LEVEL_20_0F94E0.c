struct FourWords
{
    int first;
    int second;
    int third;
    int fourth;
};
extern void func_0F9278(struct FourWords *);

void func_0F94E0(int first, int second, int third, int fourth)
{
    struct FourWords values;
    values.first = first;
    values.second = second;
    values.third = third;
    values.fourth = fourth;
    func_0F9278(&values);
}
