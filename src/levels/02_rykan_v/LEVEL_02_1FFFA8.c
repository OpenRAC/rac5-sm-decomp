struct FourWords
{
    int first;
    int second;
    int third;
    int fourth;
};
extern void func_1FFD40(struct FourWords *);

void func_1FFFA8(int first, int second, int third, int fourth)
{
    struct FourWords values;
    values.first = first;
    values.second = second;
    values.third = third;
    values.fourth = fourth;
    func_1FFD40(&values);
}
