/* LEVEL_16:0x026FA0 -- placement copy of LEVEL_01_029548.c: switches an object's mode: enabling runs the acceptance check and picks one of two update helpers, disabling runs the fallback helper when the check passes. */
typedef struct Rec Rec;

extern int func_026EC0(Rec *a0, int a1);
extern int func_026C00(Rec *a0, int a1);
extern void func_026D00(Rec *a0, float k);
extern void func_026F48(Rec *p, float v);
extern void func_026E68(Rec *a0);

void func_026FA0(Rec *o, int enable, int arg, float k)
{
    if (enable != 0) {
        func_026EC0(o, 1);
        if (func_026C00(o, arg) != 0) {
            func_026D00(o, k);
            func_026E68(o);
        } else {
            func_026F48(o, k);
            func_026E68(o);
        }
    } else if (func_026EC0(o, 0) == 0) {
        func_026F48(o, k);
        func_026E68(o);
    }
}
