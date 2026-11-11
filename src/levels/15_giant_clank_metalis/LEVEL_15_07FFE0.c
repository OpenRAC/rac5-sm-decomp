typedef struct {
    unsigned char disabled;
    char pad[11];
    int first;
    int second;
} State;
extern State D_001B4690;
void func_07FFE0(int first, int second)
{
    if (D_001B4690.disabled == 0) {
        if (D_001B4690.first < first)
            D_001B4690.first = first;
        if (D_001B4690.second < second)
            D_001B4690.second = second;
    }
}