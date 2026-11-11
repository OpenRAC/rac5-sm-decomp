typedef struct {
    unsigned char disabled;
    char pad[11];
    int first;
    int second;
} State;
extern State D_00283DD0;
void func_09C928(int first, int second)
{
    if (D_00283DD0.disabled == 0) {
        if (D_00283DD0.first < first)
            D_00283DD0.first = first;
        if (D_00283DD0.second < second)
            D_00283DD0.second = second;
    }
}