/* LEVEL_19:0x026B48 -- placement copy of LEVEL_01_029548.c: switches an object's mode: enabling runs the acceptance check and picks one of two update helpers, disabling runs the fallback helper when the check passes. */
typedef struct Rec Rec;

extern int func_026A68(Rec *a0, int a1);
extern int func_0267A8(Rec *a0, int a1);
extern void func_0268A8(Rec *a0, float k);
extern void func_026AF0(Rec *p, float v);
extern void func_026A10(Rec *a0);

void func_026B48(Rec *o, int enable, int arg, float k)
{
    if (enable != 0) {
        func_026A68(o, 1);
        if (func_0267A8(o, arg) != 0) {
            func_0268A8(o, k);
            func_026A10(o);
        } else {
            func_026AF0(o, k);
            func_026A10(o);
        }
    } else if (func_026A68(o, 0) == 0) {
        func_026AF0(o, k);
        func_026A10(o);
    }
}
