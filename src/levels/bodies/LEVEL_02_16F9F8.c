/* LEVEL_02:0x16F9F8 -- returns the nonzero result of a call when a nested field is set. */
extern int func_1DB570(int a);
typedef struct N { char p[0x24]; int f; } N;
typedef struct R { char p[0x54]; N *n; } R;
int func_16F9F8(R *r)
{
    int f = r->n->f;
    if (f != 0)
        return func_1DB570(f) != 0;
    return 0;
}
