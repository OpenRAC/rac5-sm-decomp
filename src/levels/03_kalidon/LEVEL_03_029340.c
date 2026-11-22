/* LEVEL_03:0x029340 -- placement copy of LEVEL_01_029548.c: switches an object's mode: enabling runs the acceptance check and picks one of two update helpers, disabling runs the fallback helper when the check passes. */
typedef struct Rec Rec;

extern int func_029260(Rec *a0, int a1);
extern int func_028FA0(Rec *a0, int a1);
extern void func_0290A0(Rec *a0, float k);
extern void func_0292E8(Rec *p, float v);
extern void func_029208(Rec *a0);

void func_029340(Rec *o, int enable, int arg, float k)
{
    if (enable != 0) {
        func_029260(o, 1);
        if (func_028FA0(o, arg) != 0) {
            func_0290A0(o, k);
            func_029208(o);
        } else {
            func_0292E8(o, k);
            func_029208(o);
        }
    } else if (func_029260(o, 0) == 0) {
        func_0292E8(o, k);
        func_029208(o);
    }
}
