/* LEVEL_22:0x0B5818 -- placement copy of LEVEL_01_0C7368.c: stores the current mode in the object, then dispatches on the mode globals: default start, mode 0 start with code 5, or the low-mode reset followed by the default start. */
typedef struct Obj {
    char pad0[0x18];
    unsigned int mode;
} Obj;

extern unsigned int func_0C4F98(void);
extern unsigned int func_0C4FA8(void);
extern void func_0C5270(int a0);
extern void func_0C54C8(int a0);
extern void func_10CBE0(char *record);

void func_0B5818(Obj *o)
{
    unsigned int v;

    o->mode = func_0C4F98();
    if (func_0C4FA8() != 0) {
        v = func_0C4F98();
        if (v != 0) {
            if (v < 3) {
                func_0C5270(0);
                func_10CBE0((char *)o);
            }
        } else {
            func_0C54C8(5);
        }
    } else {
        func_10CBE0((char *)o);
    }
}
