struct FourWords
{
    int first;
    int second;
    int third;
    int fourth;
};
extern void func_1FF420(struct FourWords *);

void __make_fp(int first, int second, int third, int fourth)
{
    struct FourWords values;
    values.first = first;
    values.second = second;
    values.third = third;
    values.fourth = fourth;
    func_1FF420(&values);
}
