struct FourWords
{
    int first;
    int second;
    int third;
    int fourth;
};
extern float func_196B48(struct FourWords *);

float __make_fp(int first, int second, int third, int fourth)
{
    struct FourWords values;
    values.first = first;
    values.second = second;
    values.third = third;
    values.fourth = fourth;
    return func_196B48(&values);
}
