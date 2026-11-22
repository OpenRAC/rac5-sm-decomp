/* LEVEL_07:0x029888 -- placement copy of LEVEL_01_029548.c: switches an object's mode: enabling runs the acceptance check and picks one of two update helpers, disabling runs the fallback helper when the check passes. */
typedef struct Rec Rec;

extern int func_0297A8(Rec *a0, int a1);
extern int func_0294E8(Rec *a0, int a1);
extern void func_0295E8(Rec *a0, float k);
extern void func_029830(Rec *p, float v);
extern void func_029750(Rec *a0);

void func_029888(Rec *o, int enable, int arg, float k)
{
    if (enable != 0) {
        func_0297A8(o, 1);
        if (func_0294E8(o, arg) != 0) {
            func_0295E8(o, k);
            func_029750(o);
        } else {
            func_029830(o, k);
            func_029750(o);
        }
    } else if (func_0297A8(o, 0) == 0) {
        func_029830(o, k);
        func_029750(o);
    }
}
