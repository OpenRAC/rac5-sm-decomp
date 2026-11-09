/* LEVEL_01:0x1C32F0 -- advances an object's animation state and starts the matching follow-up animation. */
typedef struct { char pad[0x34]; int sub; } S;
typedef struct { char pad[0x45]; unsigned char k; char pad46[0x12]; S *s; } O;
extern int func_07CAB8(O *o, int a);
extern int func_07CE40(O *o);
extern void func_07CD28(O *o, int a, int b, int c, float x, float y);
extern int func_1CDDB8(void *p, O *o, float f);
extern void func_1C1E90(O *o, int a, int b);

void func_1C32F0(O *o)
{
    S *s = o->s;
    int k;

    if (func_07CAB8(o, 0) != 0) {
        k = func_07CE40(o);
        if (k == 2 || k == 5)
            func_07CD28(o, k + 1, 0, 1, 0.0f, 0.0f);
    }
    if (func_1CDDB8(&s->sub, o, 0.5f) != 0) {
        if (func_07CE40(o) < 5)
            func_07CD28(o, 4, 0, 1, 0.15f, 0.0f);
        else
            func_07CD28(o, 7, 0, 1, 0.15f, 0.0f);
        func_1C1E90(o, o->k, 15);
    }
}
