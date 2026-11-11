struct FourValues
{
    int first;
    int second;
    int third;
    long long fourth;
};
extern void func_189560(struct FourValues *);

void __make_dp(int first, int second, int third, long long fourth)
{
    struct FourValues values;
    values.first = first;
    values.second = second;
    values.third = third;
    values.fourth = fourth;
    func_189560(&values);
}
