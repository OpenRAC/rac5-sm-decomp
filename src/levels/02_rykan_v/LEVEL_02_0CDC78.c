/* LEVEL_02:0x0CDC78 -- placement copy of LEVEL_01_0C7368.c: stores the current mode in the object, then dispatches on the mode globals: default start, mode 0 start with code 5, or the low-mode reset followed by the default start. */
typedef struct Obj {
    char pad0[0x18];
    unsigned int mode;
} Obj;

extern unsigned int func_0DD3E8(void);
extern unsigned int func_0DD3F8(void);
extern void func_0DD6C0(int a0);
extern void func_0DD918(int a0);
extern void func_13BAC0(char *record);

void func_0CDC78(Obj *o)
{
    unsigned int v;

    o->mode = func_0DD3E8();
    if (func_0DD3F8() != 0) {
        v = func_0DD3E8();
        if (v != 0) {
            if (v < 3) {
                func_0DD6C0(0);
                func_13BAC0((char *)o);
            }
        } else {
            func_0DD918(5);
        }
    } else {
        func_13BAC0((char *)o);
    }
}
