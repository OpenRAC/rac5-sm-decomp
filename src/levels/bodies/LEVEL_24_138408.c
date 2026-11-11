/* LEVEL_24:0x138408 -- placement copy of LEVEL_04_14ED38.c: dispatches on a small selector and forwards the pointer to one of two helpers. */
int func_0003B8(void *p);
int func_022CA0(void *p, int n);

int func_138408(int a0, void *a1)
{
    switch (a0) {
    case 2:
    case 3:
        return func_0003B8(a1);
    case 4:
        return func_022CA0(a1, -1);
    default:
        return 0;
    }
}
