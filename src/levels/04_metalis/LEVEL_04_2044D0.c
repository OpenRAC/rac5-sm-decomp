struct FourWords
{
    int first;
    int second;
    int third;
    int fourth;
};
extern void func_204268(struct FourWords *);

void func_2044D0(int first, int second, int third, int fourth)
{
    struct FourWords values;
    values.first = first;
    values.second = second;
    values.third = third;
    values.fourth = fourth;
    func_204268(&values);
}
