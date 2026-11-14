/* LEVEL_24:0x0C0C30 -- placement copy of LEVEL_01_0C7368.c: stores the current mode in the object, then dispatches on the mode globals: default start, mode 0 start with code 5, or the low-mode reset followed by the default start. */
typedef struct Obj {
    char pad0[0x18];
    unsigned int mode;
} Obj;

extern unsigned int func_0D03B0(void);
extern unsigned int func_0D03C0(void);
extern void func_0D0688(int a0);
extern void func_0D08E0(int a0);
extern void func_12B210(char *record);

void func_0C0C30(Obj *o)
{
    unsigned int v;

    o->mode = func_0D03B0();
    if (func_0D03C0() != 0) {
        v = func_0D03B0();
        if (v != 0) {
            if (v < 3) {
                func_0D0688(0);
                func_12B210((char *)o);
            }
        } else {
            func_0D08E0(5);
        }
    } else {
        func_12B210((char *)o);
    }
}
