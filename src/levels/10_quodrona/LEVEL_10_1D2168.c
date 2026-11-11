/* LEVEL_10:0x1D2168 -- placement copy of LEVEL_08_20A480.c: state machine step that starts a timed effect from a packed color. */
typedef struct Col { unsigned char b0, b1, b2, b3; } Col;
typedef struct O O;
extern int func_07D0E8(O *, int);
extern int func_1D2060(void *, O *);
extern void func_07D358(O *, int, int, int, float, float);
int func_1D2168(void *a0, O *o, unsigned char *st, Col c)
{
    if (*st == 2)
        return func_07D0E8(o, 0);
    if (func_1D2060(a0, o)) {
        func_07D358(o, c.b2, 0, 1, (float)c.b3 * 0.01f, 0.0f);
        *st = 2;
    } else if (*st == 0 && func_07D0E8(o, 0)) {
        *st = 1;
        func_07D358(o, c.b1, 0, 1, (float)c.b3 * 0.01f, 0.0f);
    }
    return 0;
}
