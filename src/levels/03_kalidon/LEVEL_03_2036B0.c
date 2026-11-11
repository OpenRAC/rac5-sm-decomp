struct FourValues
{
    int first;
    int second;
    int third;
    long long fourth;
};
extern void func_202B08(struct FourValues *);

void func_2036B0(int first, int second, int third, long long fourth)
{
    struct FourValues values;
    values.first = first;
    values.second = second;
    values.third = third;
    values.fourth = fourth;
    func_202B08(&values);
}
