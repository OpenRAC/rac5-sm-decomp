/* FRONTEND:0x023FA0 -- placement copy of LEVEL_01_1EB020.c. */
struct FourValues
{
    int first;
    int second;
    int third;
    long long fourth;
};
extern void func_0233F8(struct FourValues *);

void __make_dp(int first, int second, int third, long long fourth)
{
    struct FourValues values;
    values.first = first;
    values.second = second;
    values.third = third;
    values.fourth = fourth;
    func_0233F8(&values);
}
