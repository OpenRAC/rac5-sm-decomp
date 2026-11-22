/* LEVEL_21:0x022D20 -- placement copy of LEVEL_01_029548.c: switches an object's mode: enabling runs the acceptance check and picks one of two update helpers, disabling runs the fallback helper when the check passes. */
typedef struct Rec Rec;

extern int func_022C40(Rec *a0, int a1);
extern int func_022980(Rec *a0, int a1);
extern void func_022A80(Rec *a0, float k);
extern void func_022CC8(Rec *p, float v);
extern void func_022BE8(Rec *a0);

void func_022D20(Rec *o, int enable, int arg, float k)
{
    if (enable != 0) {
        func_022C40(o, 1);
        if (func_022980(o, arg) != 0) {
            func_022A80(o, k);
            func_022BE8(o);
        } else {
            func_022CC8(o, k);
            func_022BE8(o);
        }
    } else if (func_022C40(o, 0) == 0) {
        func_022CC8(o, k);
        func_022BE8(o);
    }
}
