typedef struct {
    unsigned char disabled;
    char pad[11];
    int first;
    int second;
} State;
extern State D_00254198;
void func_08E958(int first, int second)
{
    if (D_00254198.disabled == 0) {
        if (D_00254198.first < first)
            D_00254198.first = first;
        if (D_00254198.second < second)
            D_00254198.second = second;
    }
}