/* LEVEL_09:0x0C4618 -- placement copy of LEVEL_01_0C7368.c: stores the current mode in the object, then dispatches on the mode globals: default start, mode 0 start with code 5, or the low-mode reset followed by the default start. */
typedef struct Obj {
    char pad0[0x18];
    unsigned int mode;
} Obj;

extern unsigned int func_0D3D08(void);
extern unsigned int func_0D3D18(void);
extern void func_0D3FE0(int a0);
extern void func_0D4238(int a0);
extern void func_12E6A8(char *record);

void func_0C4618(Obj *o)
{
    unsigned int v;

    o->mode = func_0D3D08();
    if (func_0D3D18() != 0) {
        v = func_0D3D08();
        if (v != 0) {
            if (v < 3) {
                func_0D3FE0(0);
                func_12E6A8((char *)o);
            }
        } else {
            func_0D4238(5);
        }
    } else {
        func_12E6A8((char *)o);
    }
}
