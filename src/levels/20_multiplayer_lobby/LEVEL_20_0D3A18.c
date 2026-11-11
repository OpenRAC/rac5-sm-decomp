struct PoolEntry {
    int first;
    int second;
    unsigned int id;
};

extern struct PoolEntry D_00116FA0[];
extern int func_023BE8(int a, int *out);

void func_0d3a18(void)
{
    int index;
    int a;
    int b;

    for (index = 0; index < 16; index++) {
        if (D_00116FA0[index].second == 1) {
            if (func_023BE8(D_00116FA0[index].first - 1, &a) != 1) {
                D_00116FA0[index].second = 3;
                D_00116FA0[index].first = a + 1;
            }
        } else if (D_00116FA0[index].second == 2) {
            if (func_023BE8(D_00116FA0[index].first - 1, &b) != 1) {
                D_00116FA0[index].second = 3;
            }
        }
    }
}
