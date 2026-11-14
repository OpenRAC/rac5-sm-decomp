/* LEVEL_04:0x17D668 -- placement copy of LEVEL_01_170170.c: applies the two blocks of the object's state with the global parameters and the object's position, and reports 1. */
typedef struct {
    char pad_00[0x30];
    float pos[3];
    char pad_3C[0x58 - 0x3C];
    char *state;
} Obj;

extern int D_00221008;
extern float D_00221010[];
extern void func_0F2958(void *a0, int a1, float *a2);
extern void func_17F100(void *a0, float *a1, float *a2);

int func_17D668(Obj *o)
{
    char *state = o->state;
    char *first = state + 0x64;

    state = state + 0x80;
    func_0F2958(first, D_00221008, D_00221010);
    func_17F100(first, o->pos, (float *)o);
    func_0F2958(state, D_00221008, D_00221010);
    func_17F100(state, o->pos, (float *)o);
    return 1;
}
