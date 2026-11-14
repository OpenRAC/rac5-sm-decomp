/* LEVEL_01:0x0C7368 -- stores the current mode in the object, then dispatches on the mode globals: default start, mode 0 start with code 5, or the low-mode reset followed by the default start. */
typedef struct Obj {
    char pad0[0x18];
    unsigned int mode;
} Obj;

extern unsigned int func_0D6A58(void);
extern unsigned int func_0D6A68(void);
extern void func_0D6D30(int a0);
extern void func_0D6F88(int a0);
extern void func_135710(char *record);

void func_0C7368(Obj *o)
{
    unsigned int v;

    o->mode = func_0D6A58();
    if (func_0D6A68() != 0) {
        v = func_0D6A58();
        if (v != 0) {
            if (v < 3) {
                func_0D6D30(0);
                func_135710((char *)o);
            }
        } else {
            func_0D6F88(5);
        }
    } else {
        func_135710((char *)o);
    }
}
