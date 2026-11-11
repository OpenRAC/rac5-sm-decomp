struct FourValues
{
    int first;
    int second;
    int third;
    long long fourth;
};
extern void func_1D42E0(struct FourValues *);

void func_1D4E88(int first, int second, int third, long long fourth)
{
    struct FourValues values;
    values.first = first;
    values.second = second;
    values.third = third;
    values.fourth = fourth;
    func_1D42E0(&values);
}
