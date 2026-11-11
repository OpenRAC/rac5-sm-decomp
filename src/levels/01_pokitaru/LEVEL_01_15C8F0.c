/* LEVEL_01:0x15C8F0 -- checks two pointer fields of the object with a helper and returns a flag. */

extern void func_15D3D0(int *a0);
extern int func_084708(void *a0, int *a1);

int func_15C8F0(char *a0)
{
    int r;
    char *s0;
    int buf[4];

    r = 0;
    s0 = *(char **)(a0 + 0x54);
    func_15D3D0(buf);
    if (func_084708(*(void **)(s0 + 0x10), buf) != 0) {
        if (*(void **)(s0 + 0x48) == 0 || func_084708(*(void **)(s0 + 0x48), buf) == 0) {
            r = 1;
        }
    }
    return r;
}
