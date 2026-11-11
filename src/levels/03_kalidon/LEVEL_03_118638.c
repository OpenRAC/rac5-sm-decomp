struct PoolEntry {
    int first;
    int second;
    unsigned int id;
};

extern struct PoolEntry D_0021F430[];
extern int func_029480(int a, int *out);

void func_118638(void)
{
    int index;
    int a;
    int b;

    for (index = 0; index < 16; index++) {
        if (D_0021F430[index].second == 1) {
            if (func_029480(D_0021F430[index].first - 1, &a) != 1) {
                D_0021F430[index].second = 3;
                D_0021F430[index].first = a + 1;
            }
        } else if (D_0021F430[index].second == 2) {
            if (func_029480(D_0021F430[index].first - 1, &b) != 1) {
                D_0021F430[index].second = 3;
            }
        }
    }
}
