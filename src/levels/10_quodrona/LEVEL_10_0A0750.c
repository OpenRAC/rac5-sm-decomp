typedef struct {
    unsigned char disabled;
    char pad[11];
    int first;
    int second;
} State;
extern State D_002A5A50;
void func_0A0750(int first, int second)
{
    if (D_002A5A50.disabled == 0) {
        if (D_002A5A50.first < first)
            D_002A5A50.first = first;
        if (D_002A5A50.second < second)
            D_002A5A50.second = second;
    }
}