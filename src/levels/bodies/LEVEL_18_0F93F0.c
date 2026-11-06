struct PoolEntry {
    int first;
    int second;
    unsigned int id;
};

extern struct PoolEntry D_001B5D40[];
extern int func_026690(int a, int *out);

void func_0f93f0(void)
{
    int index;
    int a;
    int b;

    for (index = 0; index < 16; index++) {
        if (D_001B5D40[index].second == 1) {
            if (func_026690(D_001B5D40[index].first - 1, &a) != 1) {
                D_001B5D40[index].second = 3;
                D_001B5D40[index].first = a + 1;
            }
        } else if (D_001B5D40[index].second == 2) {
            if (func_026690(D_001B5D40[index].first - 1, &b) != 1) {
                D_001B5D40[index].second = 3;
            }
        }
    }
}
