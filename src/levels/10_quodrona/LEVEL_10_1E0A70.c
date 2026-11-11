/* LEVEL_10:0x1E0A70 -- placement copy of LEVEL_01_1DAC08.c: message handler: messages 10 and 11 trigger the object's action and report 3; otherwise the same action is requested with code 5 while the first state byte is below 5, if the flag is set. */
typedef struct Obj {
    char pad0[0x45];
    unsigned char b45;
} Obj;

extern void func_07CCA0(Obj *o, int mode);
extern void func_1E1018(Obj *o, int mode);

int func_1E0A70(Obj *o, int msg, int a2, int a3, int a4, int flag)
{
    if (msg == 10 || msg == 11) {
        func_07CCA0(o, 1);
        return 3;
    }
    if (flag == 0)
        return 1;
    if (o->b45 < 5) {
        func_1E1018(o, 5);
        return 3;
    }
    return 1;
}
