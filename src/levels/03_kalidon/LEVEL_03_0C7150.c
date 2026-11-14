/* LEVEL_03:0x0C7150 -- placement copy of LEVEL_01_0C7368.c: stores the current mode in the object, then dispatches on the mode globals: default start, mode 0 start with code 5, or the low-mode reset followed by the default start. */
typedef struct Obj {
    char pad0[0x18];
    unsigned int mode;
} Obj;

extern unsigned int func_0D6840(void);
extern unsigned int func_0D6850(void);
extern void func_0D6B18(int a0);
extern void func_0D6D70(int a0);
extern void func_133AD8(char *record);

void func_0C7150(Obj *o)
{
    unsigned int v;

    o->mode = func_0D6840();
    if (func_0D6850() != 0) {
        v = func_0D6840();
        if (v != 0) {
            if (v < 3) {
                func_0D6B18(0);
                func_133AD8((char *)o);
            }
        } else {
            func_0D6D70(5);
        }
    } else {
        func_133AD8((char *)o);
    }
}
