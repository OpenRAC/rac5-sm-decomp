/* FRONTEND:0x01F308 -- returns the second word when the helper succeeds. */
int func_01F338(int *);

int func_01F308(int *p)
{
    if (func_01F338(p) == 0)
        return -1;
    return p[1];
}
