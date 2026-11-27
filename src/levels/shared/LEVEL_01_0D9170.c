/* LEVEL_01:0x0D9170 -- picks the slots two before and two after an index in a ring of count slots (whole ring when count < 4). */
void func_0D9170(int count, int unused, int index, int *left, int *right)
{
    int l;
    int r;

    *left = index;
    *right = index;
    if (count < 4) {
        *left = 0;
        *right = count - 1;
        return;
    }
    l = index - 2;
    *left = l;
    if (l < 0) {
        *left = count + l;
    } else if (l > count - 1) {
        *left = l - (count - 1);
    }
    r = index + 2;
    *right = r;
    if (r < 0) {
        *right = count + r;
    } else if (r > count - 1) {
        *right = r - (count - 1);
    }
}
