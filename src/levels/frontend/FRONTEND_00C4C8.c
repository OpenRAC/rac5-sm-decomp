/* FRONTEND:0x00C4C8 -- locks the object, then asks the manager about it. */
int func_00C448(void *);
int func_00C338(void *, int);

int func_00C4C8(void *p)
{
    int r;

    if (p == 0) {
        return 0;
    }
    r = func_00C448(p);
    return func_00C338(p, r);
}
