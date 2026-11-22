/* LEVEL_01:0x029548 -- switches an object's mode: enabling runs the acceptance check and picks one of two update helpers, disabling runs the fallback helper when the check passes. */
typedef struct Rec Rec;

extern int func_029468(Rec *a0, int a1);
extern int func_0291A8(Rec *a0, int a1);
extern void func_0292A8(Rec *a0, float k);
extern void func_0294F0(Rec *p, float v);
extern void func_029410(Rec *a0);

void func_029548(Rec *o, int enable, int arg, float k)
{
    if (enable != 0) {
        func_029468(o, 1);
        if (func_0291A8(o, arg) != 0) {
            func_0292A8(o, k);
            func_029410(o);
        } else {
            func_0294F0(o, k);
            func_029410(o);
        }
    } else if (func_029468(o, 0) == 0) {
        func_0294F0(o, k);
        func_029410(o);
    }
}
