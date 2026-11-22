/* LEVEL_24:0x026A88 -- placement copy of LEVEL_01_029548.c: switches an object's mode: enabling runs the acceptance check and picks one of two update helpers, disabling runs the fallback helper when the check passes. */
typedef struct Rec Rec;

extern int func_0269A8(Rec *a0, int a1);
extern int func_0266E8(Rec *a0, int a1);
extern void func_0267E8(Rec *a0, float k);
extern void func_026A30(Rec *p, float v);
extern void func_026950(Rec *a0);

void func_026A88(Rec *o, int enable, int arg, float k)
{
    if (enable != 0) {
        func_0269A8(o, 1);
        if (func_0266E8(o, arg) != 0) {
            func_0267E8(o, k);
            func_026950(o);
        } else {
            func_026A30(o, k);
            func_026950(o);
        }
    } else if (func_0269A8(o, 0) == 0) {
        func_026A30(o, k);
        func_026950(o);
    }
}
