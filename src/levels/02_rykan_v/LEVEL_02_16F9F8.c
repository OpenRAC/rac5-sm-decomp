/* LEVEL_02:0x16F9F8 -- returns the nonzero result of a lookup in the nested set, passing the caller's position through, when the set is present. */
extern void *func_1DB570(void *set, float *pos);
typedef struct N { char p[0x24]; void *set; } N;
typedef struct R { char p[0x54]; N *n; } R;
int func_16F9F8(R *r, float *pos)
{
    void *set = r->n->set;
    if (set != 0)
        return func_1DB570(set, pos) != 0;
    return 0;
}
