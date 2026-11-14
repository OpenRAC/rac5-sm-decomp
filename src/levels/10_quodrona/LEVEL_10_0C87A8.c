/* LEVEL_10:0x0C87A8 -- placement copy of LEVEL_01_0C7368.c: stores the current mode in the object, then dispatches on the mode globals: default start, mode 0 start with code 5, or the low-mode reset followed by the default start. */
typedef struct Obj {
    char pad0[0x18];
    unsigned int mode;
} Obj;

extern unsigned int func_0D7E98(void);
extern unsigned int func_0D7EA8(void);
extern void func_0D8170(int a0);
extern void func_0D83C8(int a0);
extern void func_133590(char *record);

void func_0C87A8(Obj *o)
{
    unsigned int v;

    o->mode = func_0D7E98();
    if (func_0D7EA8() != 0) {
        v = func_0D7E98();
        if (v != 0) {
            if (v < 3) {
                func_0D8170(0);
                func_133590((char *)o);
            }
        } else {
            func_0D83C8(5);
        }
    } else {
        func_133590((char *)o);
    }
}
