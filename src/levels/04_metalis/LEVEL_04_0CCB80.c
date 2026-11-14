/* LEVEL_04:0x0CCB80 -- placement copy of LEVEL_01_0C7368.c: stores the current mode in the object, then dispatches on the mode globals: default start, mode 0 start with code 5, or the low-mode reset followed by the default start. */
typedef struct Obj {
    char pad0[0x18];
    unsigned int mode;
} Obj;

extern unsigned int func_0DC308(void);
extern unsigned int func_0DC318(void);
extern void func_0DC5E0(int a0);
extern void func_0DC838(int a0);
extern void func_141B90(char *record);

void func_0CCB80(Obj *o)
{
    unsigned int v;

    o->mode = func_0DC308();
    if (func_0DC318() != 0) {
        v = func_0DC308();
        if (v != 0) {
            if (v < 3) {
                func_0DC5E0(0);
                func_141B90((char *)o);
            }
        } else {
            func_0DC838(5);
        }
    } else {
        func_141B90((char *)o);
    }
}
