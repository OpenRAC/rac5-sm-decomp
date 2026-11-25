/* LEVEL_23:0x0270B8 -- placement copy of LEVEL_01_029548.c: switches an object's mode: enabling runs the acceptance check and picks one of two update helpers, disabling runs the fallback helper when the check passes. */
typedef struct Rec Rec;

extern int func_026FD8(Rec *a0, int a1);
extern int func_026D18(Rec *a0, int a1);
extern void func_026E18(Rec *a0, float k);
extern void func_027060(Rec *p, float v);
extern void func_026F80(Rec *a0);

void func_0270B8(Rec *o, int enable, float k, int arg)
{
    if (enable != 0) {
        func_026FD8(o, 1);
        if (func_026D18(o, arg) != 0) {
            func_026E18(o, k);
            func_026F80(o);
        } else {
            func_027060(o, k);
            func_026F80(o);
        }
    } else if (func_026FD8(o, 0) == 0) {
        func_027060(o, k);
        func_026F80(o);
    }
}
