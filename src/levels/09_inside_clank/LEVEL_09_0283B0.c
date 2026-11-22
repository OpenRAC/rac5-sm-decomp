/* LEVEL_09:0x0283B0 -- placement copy of LEVEL_01_029548.c: switches an object's mode: enabling runs the acceptance check and picks one of two update helpers, disabling runs the fallback helper when the check passes. */
typedef struct Rec Rec;

extern int func_0282D0(Rec *a0, int a1);
extern int func_028010(Rec *a0, int a1);
extern void func_028110(Rec *a0, float k);
extern void func_028358(Rec *p, float v);
extern void func_028278(Rec *a0);

void func_0283B0(Rec *o, int enable, int arg, float k)
{
    if (enable != 0) {
        func_0282D0(o, 1);
        if (func_028010(o, arg) != 0) {
            func_028110(o, k);
            func_028278(o);
        } else {
            func_028358(o, k);
            func_028278(o);
        }
    } else if (func_0282D0(o, 0) == 0) {
        func_028358(o, k);
        func_028278(o);
    }
}
