/* LEVEL_06:0x0C1C68 -- placement copy of LEVEL_01_0C7368.c: stores the current mode in the object, then dispatches on the mode globals: default start, mode 0 start with code 5, or the low-mode reset followed by the default start. */
typedef struct Obj {
    char pad0[0x18];
    unsigned int mode;
} Obj;

extern unsigned int func_0D1358(void);
extern unsigned int func_0D1368(void);
extern void func_0D1630(int a0);
extern void func_0D1888(int a0);
extern void func_12BDE0(char *record);

void func_0C1C68(Obj *o)
{
    unsigned int v;

    o->mode = func_0D1358();
    if (func_0D1368() != 0) {
        v = func_0D1358();
        if (v != 0) {
            if (v < 3) {
                func_0D1630(0);
                func_12BDE0((char *)o);
            }
        } else {
            func_0D1888(5);
        }
    } else {
        func_12BDE0((char *)o);
    }
}
