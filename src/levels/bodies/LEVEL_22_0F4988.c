struct PoolEntry {
    int first;
    int second;
    unsigned int id;
};

extern struct PoolEntry D_00165D90[];
extern int func_023C20(int a, int *out);

void func_0f4988(void)
{
    int index;
    int a;
    int b;

    for (index = 0; index < 16; index++) {
        if (D_00165D90[index].second == 1) {
            if (func_023C20(D_00165D90[index].first - 1, &a) != 1) {
                D_00165D90[index].second = 3;
                D_00165D90[index].first = a + 1;
            }
        } else if (D_00165D90[index].second == 2) {
            if (func_023C20(D_00165D90[index].first - 1, &b) != 1) {
                D_00165D90[index].second = 3;
            }
        }
    }
}
