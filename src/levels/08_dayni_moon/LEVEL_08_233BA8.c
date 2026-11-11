struct FourValues
{
    int first;
    int second;
    int third;
    long long fourth;
};
extern void func_233000(struct FourValues *);

void func_233BA8(int first, int second, int third, long long fourth)
{
    struct FourValues values;
    values.first = first;
    values.second = second;
    values.third = third;
    values.fourth = fourth;
    func_233000(&values);
}
