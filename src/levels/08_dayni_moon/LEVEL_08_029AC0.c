/* LEVEL_08:0x029AC0 -- placement copy of LEVEL_01_029548.c: switches an object's mode: enabling runs the acceptance check and picks one of two update helpers, disabling runs the fallback helper when the check passes. */
typedef struct Rec Rec;

extern int func_0299E0(Rec *a0, int a1);
extern int func_029720(Rec *a0, int a1);
extern void func_029820(Rec *a0, float k);
extern void func_029A68(Rec *p, float v);
extern void func_029988(Rec *a0);

void func_029AC0(Rec *o, int enable, int arg, float k)
{
    if (enable != 0) {
        func_0299E0(o, 1);
        if (func_029720(o, arg) != 0) {
            func_029820(o, k);
            func_029988(o);
        } else {
            func_029A68(o, k);
            func_029988(o);
        }
    } else if (func_0299E0(o, 0) == 0) {
        func_029A68(o, k);
        func_029988(o);
    }
}
