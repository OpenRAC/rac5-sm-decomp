typedef struct {
    unsigned char disabled;
    char pad[11];
    int first;
    int second;
} State;
extern State D_001F2210;
void func_08DD20(int first, int second)
{
    if (D_001F2210.disabled == 0) {
        if (D_001F2210.first < first)
            D_001F2210.first = first;
        if (D_001F2210.second < second)
            D_001F2210.second = second;
    }
}