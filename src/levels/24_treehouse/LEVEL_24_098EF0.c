typedef struct {
    unsigned char disabled;
    char pad[11];
    int first;
    int second;
} State;
extern State D_00268510;
void func_098EF0(int first, int second)
{
    if (D_00268510.disabled == 0) {
        if (D_00268510.first < first)
            D_00268510.first = first;
        if (D_00268510.second < second)
            D_00268510.second = second;
    }
}