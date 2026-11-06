typedef struct {
    unsigned char disabled;
    char pad[11];
    int first;
    int second;
} State;
extern State D_0029C650;
void func_09F670(int first, int second)
{
    if (D_0029C650.disabled == 0) {
        if (D_0029C650.first < first)
            D_0029C650.first = first;
        if (D_0029C650.second < second)
            D_0029C650.second = second;
    }
}