/* LEVEL_08:0x18AC90 -- placement copy of LEVEL_01_170170.c: applies the two blocks of the object's state with the global parameters and the object's position, and reports 1. */
typedef struct {
    char pad_00[0x30];
    float pos[3];
    char pad_3C[0x58 - 0x3C];
    char *state;
} Obj;

extern int D_00250B38;
extern float D_00250B40[];
extern void func_0F6E50(void *a0, int a1, float *a2);
extern void func_18C728(void *a0, float *a1, float *a2);

int func_18AC90(Obj *o)
{
    char *state = o->state;
    char *first = state + 0x64;

    state = state + 0x80;
    func_0F6E50(first, D_00250B38, D_00250B40);
    func_18C728(first, o->pos, (float *)o);
    func_0F6E50(state, D_00250B38, D_00250B40);
    func_18C728(state, o->pos, (float *)o);
    return 1;
}
