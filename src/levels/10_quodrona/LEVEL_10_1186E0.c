struct PoolEntry {
    int first;
    int second;
    unsigned int id;
};

extern struct PoolEntry D_0020FA10[];
extern int func_029460(int a, int *out);

void func_1186e0(void)
{
    int index;
    int a;
    int b;

    for (index = 0; index < 16; index++) {
        if (D_0020FA10[index].second == 1) {
            if (func_029460(D_0020FA10[index].first - 1, &a) != 1) {
                D_0020FA10[index].second = 3;
                D_0020FA10[index].first = a + 1;
            }
        } else if (D_0020FA10[index].second == 2) {
            if (func_029460(D_0020FA10[index].first - 1, &b) != 1) {
                D_0020FA10[index].second = 3;
            }
        }
    }
}
