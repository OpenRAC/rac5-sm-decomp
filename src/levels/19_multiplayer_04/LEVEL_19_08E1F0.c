typedef struct {
    unsigned char disabled;
    char pad[11];
    int first;
    int second;
} State;
extern State D_00254318;
void func_08E1F0(int first, int second)
{
    if (D_00254318.disabled == 0) {
        if (D_00254318.first < first)
            D_00254318.first = first;
        if (D_00254318.second < second)
            D_00254318.second = second;
    }
}