/* LEVEL_18:0x0B4FB0 -- placement copy of LEVEL_01_0C7368.c: stores the current mode in the object, then dispatches on the mode globals: default start, mode 0 start with code 5, or the low-mode reset followed by the default start. */
typedef struct Obj {
    char pad0[0x18];
    unsigned int mode;
} Obj;

extern unsigned int func_0C5128(void);
extern unsigned int func_0C5138(void);
extern void func_0C5400(int a0);
extern void func_0C5658(int a0);
extern void func_110A90(char *record);

void func_0B4FB0(Obj *o)
{
    unsigned int v;

    o->mode = func_0C5128();
    if (func_0C5138() != 0) {
        v = func_0C5128();
        if (v != 0) {
            if (v < 3) {
                func_0C5400(0);
                func_110A90((char *)o);
            }
        } else {
            func_0C5658(5);
        }
    } else {
        func_110A90((char *)o);
    }
}
