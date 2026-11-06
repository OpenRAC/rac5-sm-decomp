typedef struct {
    unsigned char disabled;
    char pad[11];
    int first;
    int second;
} State;
extern State D_002B74D0;
void func_09F3F8(int first, int second)
{
    if (D_002B74D0.disabled == 0) {
        if (D_002B74D0.first < first)
            D_002B74D0.first = first;
        if (D_002B74D0.second < second)
            D_002B74D0.second = second;
    }
}