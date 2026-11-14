/* LEVEL_17:0x0B5518 -- placement copy of LEVEL_01_0C7368.c: stores the current mode in the object, then dispatches on the mode globals: default start, mode 0 start with code 5, or the low-mode reset followed by the default start. */
typedef struct Obj {
    char pad0[0x18];
    unsigned int mode;
} Obj;

extern unsigned int func_0C5690(void);
extern unsigned int func_0C56A0(void);
extern void func_0C5968(int a0);
extern void func_0C5BC0(int a0);
extern void func_111358(char *record);

void func_0B5518(Obj *o)
{
    unsigned int v;

    o->mode = func_0C5690();
    if (func_0C56A0() != 0) {
        v = func_0C5690();
        if (v != 0) {
            if (v < 3) {
                func_0C5968(0);
                func_111358((char *)o);
            }
        } else {
            func_0C5BC0(5);
        }
    } else {
        func_111358((char *)o);
    }
}
