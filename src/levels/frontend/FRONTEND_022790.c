/* FRONTEND:0x022790 -- clears slot `index` of the two parallel 16-entry word tables; fails for indices of 16 or more. */
typedef struct {
    int a[16];
    int b[16];
} Tab;

int func_022790(Tab *t, unsigned int index)
{
    if (index < 16) {
        t->a[index] = 0;
        t->b[index] = 0;
        return 1;
    }
    return 0;
}
