/* LEVEL_05:0x0C5910 -- placement copy of LEVEL_01_0C7368.c: stores the current mode in the object, then dispatches on the mode globals: default start, mode 0 start with code 5, or the low-mode reset followed by the default start. */
typedef struct Obj {
    char pad0[0x18];
    unsigned int mode;
} Obj;

extern unsigned int func_0D5000(void);
extern unsigned int func_0D5010(void);
extern void func_0D52D8(int a0);
extern void func_0D5530(int a0);
extern void func_131088(char *record);

void func_0C5910(Obj *o)
{
    unsigned int v;

    o->mode = func_0D5000();
    if (func_0D5010() != 0) {
        v = func_0D5000();
        if (v != 0) {
            if (v < 3) {
                func_0D52D8(0);
                func_131088((char *)o);
            }
        } else {
            func_0D5530(5);
        }
    } else {
        func_131088((char *)o);
    }
}
