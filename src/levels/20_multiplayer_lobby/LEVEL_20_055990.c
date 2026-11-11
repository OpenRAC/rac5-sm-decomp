/* LEVEL_20:0x055990 -- placement copy of LEVEL_16_05C368.c: forwards one of two argument values to a helper, chosen by a state field and a float threshold. */
typedef struct {
    char pad_00[0xE7C];
    int f_E7C;
    char pad_E80[0xF44 - 0xE80];
    float f_F44;
} Obj;

extern void func_0558B0(Obj *a0, int a1);

void func_055990(Obj *a0, int a1)
{
    if (a0->f_E7C != 1 || a0->f_F44 <= 0.6666667f) {
        func_0558B0(a0, a1);
    } else {
        func_0558B0(a0, 1);
    }
}
