/* LEVEL_15:0x0F7B70 -- rebases the record's offset word by the global base (clearing it when it is zero) and runs the finishing helper. */
extern int D_0015B714;
extern void func_132658(void);

void func_0F7B70(char *a0)
{
    int *p = *(int **)(a0 + 0x54);
    int i;
    int v;
    int ok;

    for (i = 0; i < 1; i++) {
        v = *p;
        if (v == 0)
            ok = 0;
        else {
            *p = D_0015B714 + v;
            ok = 1;
        }
        if (!ok)
            *p = 0;
        p++;
    }
    func_132658();
}
