/* LEVEL_06:0x15F3B0 -- placement copy of LEVEL_01_170170.c: applies the two blocks of the object's state with the global parameters and the object's position, and reports 1. */
typedef struct {
    char pad_00[0x30];
    float pos[3];
    char pad_3C[0x58 - 0x3C];
    char *state;
} Obj;

extern int D_001F6398;
extern float D_001F63A0[];
extern void func_0E6218(void *a0, int a1, float *a2);
extern void func_160E48(void *a0, float *a1, float *a2);

int func_15F3B0(Obj *o)
{
    char *state = o->state;
    char *first = state + 0x64;

    state = state + 0x80;
    func_0E6218(first, D_001F6398, D_001F63A0);
    func_160E48(first, o->pos, (float *)o);
    func_0E6218(state, D_001F6398, D_001F63A0);
    func_160E48(state, o->pos, (float *)o);
    return 1;
}
