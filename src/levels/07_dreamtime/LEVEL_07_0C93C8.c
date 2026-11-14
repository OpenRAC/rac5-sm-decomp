/* LEVEL_07:0x0C93C8 -- placement copy of LEVEL_01_0C7368.c: stores the current mode in the object, then dispatches on the mode globals: default start, mode 0 start with code 5, or the low-mode reset followed by the default start. */
typedef struct Obj {
    char pad0[0x18];
    unsigned int mode;
} Obj;

extern unsigned int func_0D8AB8(void);
extern unsigned int func_0D8AC8(void);
extern void func_0D8D90(int a0);
extern void func_0D8FE8(int a0);
extern void func_138710(char *record);

void func_0C93C8(Obj *o)
{
    unsigned int v;

    o->mode = func_0D8AB8();
    if (func_0D8AC8() != 0) {
        v = func_0D8AB8();
        if (v != 0) {
            if (v < 3) {
                func_0D8D90(0);
                func_138710((char *)o);
            }
        } else {
            func_0D8FE8(5);
        }
    } else {
        func_138710((char *)o);
    }
}
