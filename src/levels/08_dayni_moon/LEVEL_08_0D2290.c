/* LEVEL_08:0x0D2290 -- placement copy of LEVEL_01_0C7368.c: stores the current mode in the object, then dispatches on the mode globals: default start, mode 0 start with code 5, or the low-mode reset followed by the default start. */
typedef struct Obj {
    char pad0[0x18];
    unsigned int mode;
} Obj;

extern unsigned int func_0E1A18(void);
extern unsigned int func_0E1A28(void);
extern void func_0E1CF0(int a0);
extern void func_0E1F48(int a0);
extern void func_146C48(char *record);

void func_0D2290(Obj *o)
{
    unsigned int v;

    o->mode = func_0E1A18();
    if (func_0E1A28() != 0) {
        v = func_0E1A18();
        if (v != 0) {
            if (v < 3) {
                func_0E1CF0(0);
                func_146C48((char *)o);
            }
        } else {
            func_0E1F48(5);
        }
    } else {
        func_146C48((char *)o);
    }
}
