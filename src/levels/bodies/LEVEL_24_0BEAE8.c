struct __attribute__((packed)) Pair {
    unsigned long long first;
    unsigned long long second;
};
extern struct Pair D_002F78D8;

void func_0BEAE8(const struct Pair *values)
{
    D_002F78D8 = *values;
}
