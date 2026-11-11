struct PoolEntry {
    int first;
    int second;
    unsigned int id;
};

extern struct PoolEntry D_002201D0[];
extern int func_029130(int a, int *out);

void func_125a30(void)
{
    int index;
    int a;
    int b;

    for (index = 0; index < 16; index++) {
        if (D_002201D0[index].second == 1) {
            if (func_029130(D_002201D0[index].first - 1, &a) != 1) {
                D_002201D0[index].second = 3;
                D_002201D0[index].first = a + 1;
            }
        } else if (D_002201D0[index].second == 2) {
            if (func_029130(D_002201D0[index].first - 1, &b) != 1) {
                D_002201D0[index].second = 3;
            }
        }
    }
}
