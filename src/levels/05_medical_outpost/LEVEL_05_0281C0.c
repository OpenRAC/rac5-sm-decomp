/* LEVEL_05:0x0281C0 -- placement copy of LEVEL_01_029548.c: switches an object's mode: enabling runs the acceptance check and picks one of two update helpers, disabling runs the fallback helper when the check passes. */
typedef struct Rec Rec;

extern int func_0280E0(Rec *a0, int a1);
extern int func_027E20(Rec *a0, int a1);
extern void func_027F20(Rec *a0, float k);
extern void func_028168(Rec *p, float v);
extern void func_028088(Rec *a0);

void func_0281C0(Rec *o, int enable, float k, int arg)
{
    if (enable != 0) {
        func_0280E0(o, 1);
        if (func_027E20(o, arg) != 0) {
            func_027F20(o, k);
            func_028088(o);
        } else {
            func_028168(o, k);
            func_028088(o);
        }
    } else if (func_0280E0(o, 0) == 0) {
        func_028168(o, k);
        func_028088(o);
    }
}
