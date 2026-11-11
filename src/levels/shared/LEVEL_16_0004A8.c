extern unsigned int func_0002D8(int index);
extern float func_000450(int value);
extern float func_000480(void);

float func_0004A8(void)
{
    unsigned int index = 0;
    float total = 0.0f;
    do {
        if (index != 3 && index != 5)
            total += func_000450(func_0002D8(index));
        index++;
    } while (index < 6);
    return total + func_000480();
}
