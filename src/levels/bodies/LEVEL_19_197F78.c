struct FourWords
{
    int first;
    int second;
    int third;
    int fourth;
};
extern void func_197D10(struct FourWords *);

void func_197F78(int first, int second, int third, int fourth)
{
    struct FourWords values;
    values.first = first;
    values.second = second;
    values.third = third;
    values.fourth = fourth;
    func_197D10(&values);
}
