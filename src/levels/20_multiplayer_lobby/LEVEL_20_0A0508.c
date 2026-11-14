/* LEVEL_20:0x0A0508 -- placement copy of LEVEL_01_0C7368.c: stores the current mode in the object, then dispatches on the mode globals: default start, mode 0 start with code 5, or the low-mode reset followed by the default start. */
typedef struct Obj {
    char pad0[0x18];
    unsigned int mode;
} Obj;

extern unsigned int func_0B0680(void);
extern unsigned int func_0B0690(void);
extern void func_0B0958(int a0);
extern void func_0B0BB0(int a0);
extern void func_0E4BC8(char *record);

void func_0A0508(Obj *o)
{
    unsigned int v;

    o->mode = func_0B0680();
    if (func_0B0690() != 0) {
        v = func_0B0680();
        if (v != 0) {
            if (v < 3) {
                func_0B0958(0);
                func_0E4BC8((char *)o);
            }
        } else {
            func_0B0BB0(5);
        }
    } else {
        func_0E4BC8((char *)o);
    }
}
