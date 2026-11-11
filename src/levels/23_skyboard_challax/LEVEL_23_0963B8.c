typedef struct {
    unsigned char disabled;
    char pad[11];
    int first;
    int second;
} State;
extern State D_0026DA90;
void func_0963B8(int first, int second)
{
    if (D_0026DA90.disabled == 0) {
        if (D_0026DA90.first < first)
            D_0026DA90.first = first;
        if (D_0026DA90.second < second)
            D_0026DA90.second = second;
    }
}