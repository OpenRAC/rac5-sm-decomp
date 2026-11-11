struct PoolEntry {
    int first;
    int second;
    unsigned int id;
};

extern struct PoolEntry D_001F5E30[];
extern int func_028300(int a, int *out);

void func_1164e8(void)
{
    int index;
    int a;
    int b;

    for (index = 0; index < 16; index++) {
        if (D_001F5E30[index].second == 1) {
            if (func_028300(D_001F5E30[index].first - 1, &a) != 1) {
                D_001F5E30[index].second = 3;
                D_001F5E30[index].first = a + 1;
            }
        } else if (D_001F5E30[index].second == 2) {
            if (func_028300(D_001F5E30[index].first - 1, &b) != 1) {
                D_001F5E30[index].second = 3;
            }
        }
    }
}
