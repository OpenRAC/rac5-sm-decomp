/* LEVEL_20:0x023AA8 -- placement copy of LEVEL_01_029548.c: switches an object's mode: enabling runs the acceptance check and picks one of two update helpers, disabling runs the fallback helper when the check passes. */
typedef struct Rec Rec;

extern int func_0239C8(Rec *a0, int a1);
extern int func_023708(Rec *a0, int a1);
extern void func_023808(Rec *a0, float k);
extern void func_023A50(Rec *p, float v);
extern void func_023970(Rec *a0);

void func_023AA8(Rec *o, int enable, int arg, float k)
{
    if (enable != 0) {
        func_0239C8(o, 1);
        if (func_023708(o, arg) != 0) {
            func_023808(o, k);
            func_023970(o);
        } else {
            func_023A50(o, k);
            func_023970(o);
        }
    } else if (func_0239C8(o, 0) == 0) {
        func_023A50(o, k);
        func_023970(o);
    }
}
