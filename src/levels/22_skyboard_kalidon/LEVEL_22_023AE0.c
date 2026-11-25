/* LEVEL_22:0x023AE0 -- placement copy of LEVEL_01_029548.c: switches an object's mode: enabling runs the acceptance check and picks one of two update helpers, disabling runs the fallback helper when the check passes. */
typedef struct Rec Rec;

extern int func_023A00(Rec *a0, int a1);
extern int func_023740(Rec *a0, int a1);
extern void func_023840(Rec *a0, float k);
extern void func_023A88(Rec *p, float v);
extern void func_0239A8(Rec *a0);

void func_023AE0(Rec *o, int enable, float k, int arg)
{
    if (enable != 0) {
        func_023A00(o, 1);
        if (func_023740(o, arg) != 0) {
            func_023840(o, k);
            func_0239A8(o);
        } else {
            func_023A88(o, k);
            func_0239A8(o);
        }
    } else if (func_023A00(o, 0) == 0) {
        func_023A88(o, k);
        func_0239A8(o);
    }
}
