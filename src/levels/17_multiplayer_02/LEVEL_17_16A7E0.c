/* LEVEL:0x16A7E0 -- counts nonzero entries among the two words after the first in a child table. */
int func_16A7E0(char *object)
{
    int *child = *(int **)(object + 0x58);
    int *p = child + 1;
    int count = 0;
    unsigned int i = 0;

    do {
        int value = *p;
        int next = count + 1;
        i++;
        p++;
        count = value != 0 ? next : count;
    } while (i < 2);
    return count;
}
