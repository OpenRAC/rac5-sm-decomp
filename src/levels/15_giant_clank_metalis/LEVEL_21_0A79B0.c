/* LEVEL_21:0x0A79B0 -- placement copy of LEVEL_01_0C7368.c: stores the current mode in the object, then dispatches on the mode globals: default start, mode 0 start with code 5, or the low-mode reset followed by the default start. */
typedef struct Obj {
    char pad0[0x18];
    unsigned int mode;
} Obj;

extern unsigned int func_0B7098(void);
extern unsigned int func_0B70A8(void);
extern void func_0B7370(int a0);
extern void func_0B75C8(int a0);
extern void func_0F45D8(char *record);

void func_0A79B0(Obj *o)
{
    unsigned int v;

    o->mode = func_0B7098();
    if (func_0B70A8() != 0) {
        v = func_0B7098();
        if (v != 0) {
            if (v < 3) {
                func_0B7370(0);
                func_0F45D8((char *)o);
            }
        } else {
            func_0B75C8(5);
        }
    } else {
        func_0F45D8((char *)o);
    }
}
