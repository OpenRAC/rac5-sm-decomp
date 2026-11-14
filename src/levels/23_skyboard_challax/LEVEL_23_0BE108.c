/* LEVEL_23:0x0BE108 -- placement copy of LEVEL_01_0C7368.c: stores the current mode in the object, then dispatches on the mode globals: default start, mode 0 start with code 5, or the low-mode reset followed by the default start. */
typedef struct Obj {
    char pad0[0x18];
    unsigned int mode;
} Obj;

extern unsigned int func_0CD888(void);
extern unsigned int func_0CD898(void);
extern void func_0CDB60(int a0);
extern void func_0CDDB8(int a0);
extern void func_126E88(char *record);

void func_0BE108(Obj *o)
{
    unsigned int v;

    o->mode = func_0CD888();
    if (func_0CD898() != 0) {
        v = func_0CD888();
        if (v != 0) {
            if (v < 3) {
                func_0CDB60(0);
                func_126E88((char *)o);
            }
        } else {
            func_0CDDB8(5);
        }
    } else {
        func_126E88((char *)o);
    }
}
