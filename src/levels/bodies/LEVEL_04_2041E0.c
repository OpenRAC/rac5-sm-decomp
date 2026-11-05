struct FourValues
{
    int first;
    int second;
    int third;
    long long fourth;
};
extern void func_203638(struct FourValues *);

void func_2041E0(int first, int second, int third, long long fourth)
{
    struct FourValues values;
    values.first = first;
    values.second = second;
    values.third = third;
    values.fourth = fourth;
    func_203638(&values);
}
