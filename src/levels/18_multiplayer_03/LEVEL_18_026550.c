/* LEVEL_18:0x026550 -- placement copy of LEVEL_01_029548.c: switches an object's mode: enabling runs the acceptance check and picks one of two update helpers, disabling runs the fallback helper when the check passes. */
typedef struct Rec Rec;

extern int func_026470(Rec *a0, int a1);
extern int func_0261B0(Rec *a0, int a1);
extern void func_0262B0(Rec *a0, float k);
extern void func_0264F8(Rec *p, float v);
extern void func_026418(Rec *a0);

void func_026550(Rec *o, int enable, int arg, float k)
{
    if (enable != 0) {
        func_026470(o, 1);
        if (func_0261B0(o, arg) != 0) {
            func_0262B0(o, k);
            func_026418(o);
        } else {
            func_0264F8(o, k);
            func_026418(o);
        }
    } else if (func_026470(o, 0) == 0) {
        func_0264F8(o, k);
        func_026418(o);
    }
}
