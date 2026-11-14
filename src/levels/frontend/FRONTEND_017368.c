/* FRONTEND:0x017368 -- placement copy of LEVEL_01_0C7368.c: stores the current mode in the object, then dispatches on the mode globals: default start, mode 0 start with code 5, or the low-mode reset followed by the default start. */
typedef struct Obj {
    char pad0[0x18];
    unsigned int mode;
} Obj;

extern unsigned int func_013BF0(void);
extern unsigned int func_013C00(void);
extern void func_013EC0(int a0);
extern void func_014118(int a0);
extern void func_0229D0(char *record);

void func_017368(Obj *o)
{
    unsigned int v;

    o->mode = func_013BF0();
    if (func_013C00() != 0) {
        v = func_013BF0();
        if (v != 0) {
            if (v < 3) {
                func_013EC0(0);
                func_0229D0((char *)o);
            }
        } else {
            func_014118(5);
        }
    } else {
        func_0229D0((char *)o);
    }
}
