struct FourValues
{
    int first;
    int second;
    int third;
    long long fourth;
};
extern void func_195F18(struct FourValues *);

void func_196AC0(int first, int second, int third, long long fourth)
{
    struct FourValues values;
    values.first = first;
    values.second = second;
    values.third = third;
    values.fourth = fourth;
    func_195F18(&values);
}
