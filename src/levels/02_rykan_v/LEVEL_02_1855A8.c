/* LEVEL_02:0x1855A8 -- placement copy of LEVEL_01_170170.c: applies the two blocks of the object's state with the global parameters and the object's position, and reports 1. */
typedef struct {
    char pad_00[0x30];
    float pos[3];
    char pad_3C[0x58 - 0x3C];
    char *state;
} Obj;

extern int D_0021C958;
extern float D_0021C960[];
extern void func_0F3308(void *a0, int a1, float *a2);
extern void func_187040(void *a0, float *a1, float *a2);

int func_1855A8(Obj *o)
{
    char *state = o->state;
    char *first = state + 0x64;

    state = state + 0x80;
    func_0F3308(first, D_0021C958, D_0021C960);
    func_187040(first, o->pos, (float *)o);
    func_0F3308(state, D_0021C958, D_0021C960);
    func_187040(state, o->pos, (float *)o);
    return 1;
}
