/* FRONTEND:0x002840 -- removes every element equal to the key from the
   array, compacting it and filling the freed slots with -1; returns the
   number of surviving elements. */
int func_002840(int key, int *base, int count)
{
    int *end = base + count;
    int *p = base;

    while (p != end) {
        if (*p == key) {
            end--;
            *p = *end;
            *end = -1;
        } else {
            p++;
        }
    }
    return count - (int)(end - base);
}
