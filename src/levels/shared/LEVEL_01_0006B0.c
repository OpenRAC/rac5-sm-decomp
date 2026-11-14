/* LEVEL_01:0x0006B0 -- reads slot 0 and returns it only when slots 1 to 5 hold the same value, else 0. */
extern unsigned int func_0002D8(int index);

int func_0006B0(void)
{
    unsigned int v = func_0002D8(0);
    unsigned int i;

    for (i = 1; i < 6; i++) {
        if (func_0002D8(i) != v) {
            v = 0;
            break;
        }
    }
    return v;
}
