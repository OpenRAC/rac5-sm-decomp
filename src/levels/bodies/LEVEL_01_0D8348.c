/* LEVEL_01:0x0D8348 -- computes wrapped start and end positions of a centered span inside a ring. */
void func_0D8348(unsigned int first_size, unsigned int second_size,
                 int center, int *first, int *last)
{
    unsigned int half;
    unsigned int other;
    int left;
    int right;
    int end;

    *first = center;
    *last = center;
    half = (int)first_size / 2;
    other = second_size >> 1;
    half = other < half ? other : half;
    left = *first - half;
    second_size = second_size < first_size ? second_size : first_size;
    *first = left > -1 ? left : left + first_size;
    right = second_size - 1;
    right -= half;
    if (right != 0) {
        end = *last + right;
        *last = end < (int)first_size ? end : end - first_size;
    } else {
        *last = center;
    }
}