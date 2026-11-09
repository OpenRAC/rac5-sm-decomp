/* LEVEL_10:0x173440 -- chooses a next entry from timing values and applies it. */
typedef struct O { char pad[0xE4]; int e4; int e8; float ec; } O;
extern int func_173020(O *);
extern float func_1731E8(O *);
extern float func_173168(O *, int);
extern void func_1730A0(O *, float, float);
extern int func_1732B0(float, O *, int);
extern void func_173028(O *, int, float);
void func_173440(O *o)
{
    int idx = func_173020(o);
    float a, b;
    int cur;
    if (idx == -1) {
        b = 0.0f;
        a = b;
    } else {
        a = func_1731E8(o);
        b = func_173168(o, idx);
    }
    cur = o->e8;
    if (cur != -1) {
        float g = o->ec;
        if (b - g <= a + 0.033333335f) {
            a = 0.0f;
            if (a < g)
                func_1730A0(o, a, g);
            else {
                if (o->e4 == cur && func_1732B0(a, o, cur))
                    return;
                func_173028(o, o->e8, a);
            }
        }
    } else {
        if (b <= a + 0.033333335f)
            o->e4 = cur;
    }
}
