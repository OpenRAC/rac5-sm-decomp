/* LEVEL_04:0x028FF0 -- placement copy of LEVEL_01_029548.c: switches an object's mode: enabling runs the acceptance check and picks one of two update helpers, disabling runs the fallback helper when the check passes. */
typedef struct Rec Rec;

extern int func_028F10(Rec *a0, int a1);
extern int func_028C50(Rec *a0, int a1);
extern void func_028D50(Rec *a0, float k);
extern void func_028F98(Rec *p, float v);
extern void func_028EB8(Rec *a0);

void func_028FF0(Rec *o, int enable, float k, int arg)
{
    if (enable != 0) {
        func_028F10(o, 1);
        if (func_028C50(o, arg) != 0) {
            func_028D50(o, k);
            func_028EB8(o);
        } else {
            func_028F98(o, k);
            func_028EB8(o);
        }
    } else if (func_028F10(o, 0) == 0) {
        func_028F98(o, k);
        func_028EB8(o);
    }
}
