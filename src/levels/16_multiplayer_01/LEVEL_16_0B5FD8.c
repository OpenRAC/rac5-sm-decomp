/* LEVEL_16:0x0B5FD8 -- placement copy of LEVEL_01_0C7368.c: stores the current mode in the object, then dispatches on the mode globals: default start, mode 0 start with code 5, or the low-mode reset followed by the default start. */
typedef struct Obj {
    char pad0[0x18];
    unsigned int mode;
} Obj;

extern unsigned int func_0C6150(void);
extern unsigned int func_0C6160(void);
extern void func_0C6428(int a0);
extern void func_0C6680(int a0);
extern void func_111DE0(char *record);

void func_0B5FD8(Obj *o)
{
    unsigned int v;

    o->mode = func_0C6150();
    if (func_0C6160() != 0) {
        v = func_0C6150();
        if (v != 0) {
            if (v < 3) {
                func_0C6428(0);
                func_111DE0((char *)o);
            }
        } else {
            func_0C6680(5);
        }
    } else {
        func_111DE0((char *)o);
    }
}
