/* LEVEL_19:0x0B58B0 -- placement copy of LEVEL_01_0C7368.c: stores the current mode in the object, then dispatches on the mode globals: default start, mode 0 start with code 5, or the low-mode reset followed by the default start. */
typedef struct Obj {
    char pad0[0x18];
    unsigned int mode;
} Obj;

extern unsigned int func_0C5A28(void);
extern unsigned int func_0C5A38(void);
extern void func_0C5D00(int a0);
extern void func_0C5F58(int a0);
extern void func_112480(char *record);

void func_0B58B0(Obj *o)
{
    unsigned int v;

    o->mode = func_0C5A28();
    if (func_0C5A38() != 0) {
        v = func_0C5A28();
        if (v != 0) {
            if (v < 3) {
                func_0C5D00(0);
                func_112480((char *)o);
            }
        } else {
            func_0C5F58(5);
        }
    } else {
        func_112480((char *)o);
    }
}
