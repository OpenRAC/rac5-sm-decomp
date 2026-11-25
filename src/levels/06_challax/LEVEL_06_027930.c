/* LEVEL_06:0x027930 -- placement copy of LEVEL_01_029548.c: switches an object's mode: enabling runs the acceptance check and picks one of two update helpers, disabling runs the fallback helper when the check passes. */
typedef struct Rec Rec;

extern int func_027850(Rec *a0, int a1);
extern int func_027590(Rec *a0, int a1);
extern void func_027690(Rec *a0, float k);
extern void func_0278D8(Rec *p, float v);
extern void func_0277F8(Rec *a0);

void func_027930(Rec *o, int enable, float k, int arg)
{
    if (enable != 0) {
        func_027850(o, 1);
        if (func_027590(o, arg) != 0) {
            func_027690(o, k);
            func_0277F8(o);
        } else {
            func_0278D8(o, k);
            func_0277F8(o);
        }
    } else if (func_027850(o, 0) == 0) {
        func_0278D8(o, k);
        func_0277F8(o);
    }
}
