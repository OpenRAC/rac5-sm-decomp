typedef struct {
    unsigned char disabled;
    char pad[11];
    int first;
    int second;
} State;
extern State D_00254518;
void func_08D970(int first, int second)
{
    if (D_00254518.disabled == 0) {
        if (D_00254518.first < first)
            D_00254518.first = first;
        if (D_00254518.second < second)
            D_00254518.second = second;
    }
}