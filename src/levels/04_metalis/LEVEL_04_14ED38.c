/* LEVEL_04:0x14ED38 -- dispatches on a small selector and forwards the pointer to one of two helpers. */
int func_0003B8(void *p);
int func_024B48(void *p, int n);

int func_14ED38(int a0, void *a1)
{
    switch (a0) {
    case 2:
    case 3:
        return func_0003B8(a1);
    case 4:
        return func_024B48(a1, -1);
    default:
        return 0;
    }
}
