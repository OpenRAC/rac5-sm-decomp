/* LEVEL_07:0x17A078 -- placement copy of LEVEL_01_170170.c: applies the two blocks of the object's state with the global parameters and the object's position, and reports 1. */
typedef struct {
    char pad_00[0x30];
    float pos[3];
    char pad_3C[0x58 - 0x3C];
    char *state;
} Obj;

extern int D_0021BDB0;
extern float D_0021BDB8[];
extern void func_0EDF58(void *a0, int a1, float *a2);
extern void func_17BB10(void *a0, float *a1, float *a2);

int func_17A078(Obj *o)
{
    char *state = o->state;
    char *first = state + 0x64;

    state = state + 0x80;
    func_0EDF58(first, D_0021BDB0, D_0021BDB8);
    func_17BB10(first, o->pos, (float *)o);
    func_0EDF58(state, D_0021BDB0, D_0021BDB8);
    func_17BB10(state, o->pos, (float *)o);
    return 1;
}
