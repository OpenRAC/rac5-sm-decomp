typedef struct {
    unsigned char disabled;
    char pad[11];
    int first;
    int second;
} State;
extern State D_00245498;
void func_08DE50(int first, int second)
{
    if (D_00245498.disabled == 0) {
        if (D_00245498.first < first)
            D_00245498.first = first;
        if (D_00245498.second < second)
            D_00245498.second = second;
    }
}