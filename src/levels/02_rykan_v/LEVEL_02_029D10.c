/* LEVEL_02:0x029D10 -- placement copy of LEVEL_01_029548.c: switches an object's mode: enabling runs the acceptance check and picks one of two update helpers, disabling runs the fallback helper when the check passes. */
typedef struct Rec Rec;

extern int func_029C30(Rec *a0, int a1);
extern int func_029970(Rec *a0, int a1);
extern void func_029A70(Rec *a0, float k);
extern void func_029CB8(Rec *p, float v);
extern void func_029BD8(Rec *a0);

void func_029D10(Rec *o, int enable, float k, int arg)
{
    if (enable != 0) {
        func_029C30(o, 1);
        if (func_029970(o, arg) != 0) {
            func_029A70(o, k);
            func_029BD8(o);
        } else {
            func_029CB8(o, k);
            func_029BD8(o);
        }
    } else if (func_029C30(o, 0) == 0) {
        func_029CB8(o, k);
        func_029BD8(o);
    }
}
