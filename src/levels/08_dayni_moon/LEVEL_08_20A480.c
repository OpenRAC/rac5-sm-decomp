/* LEVEL_08:0x20A480 -- state machine step that starts a timed effect from a packed color. */
typedef struct Col { unsigned char b0, b1, b2, b3; } Col;
typedef struct O O;
extern int func_084A40(O *, int);
extern int func_20A378(void *, O *);
extern void func_084C98(O *, int, int, int, float, float);
int func_20A480(void *a0, O *o, unsigned char *st, Col c)
{
    if (*st == 2)
        return func_084A40(o, 0);
    if (func_20A378(a0, o)) {
        func_084C98(o, c.b2, 0, 1, (float)c.b3 * 0.01f, 0.0f);
        *st = 2;
    } else if (*st == 0 && func_084A40(o, 0)) {
        *st = 1;
        func_084C98(o, c.b1, 0, 1, (float)c.b3 * 0.01f, 0.0f);
    }
    return 0;
}
