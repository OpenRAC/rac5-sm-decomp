struct FourWords
{
    int first;
    int second;
    int third;
    int fourth;
};
extern void func_18A190(struct FourWords *);

void func_18A3F8(int first, int second, int third, int fourth)
{
    struct FourWords values;
    values.first = first;
    values.second = second;
    values.third = third;
    values.fourth = fourth;
    func_18A190(&values);
}
