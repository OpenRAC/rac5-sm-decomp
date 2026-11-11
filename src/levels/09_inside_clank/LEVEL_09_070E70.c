/* LEVEL_09.REL:0x070E70 -- looks up entry a1 of the 16 byte table at
   0x00202958 and forwards its +0xC integer and +0x4 float to func_070CB8,
   behind the caller's own pointer arguments and float.  The index is
   materialised once in a local pointer: two array subscripts make the
   compiler copy the sum through a scratch register. */
typedef struct {
    unsigned char pad0[4];
    float v_4;
    unsigned char pad1[4];
    int n_C;
} Ent;

extern Ent D_00202958[];

extern void func_070CB8(void *a0, void *a1, void *a2, int a3, float a4,
                        float a5);

void func_070E70(void *a0, int a1, void *a2, void *a3, float a4)
{
    Ent *e = &D_00202958[a1];

    func_070CB8(a0, a2, a3, e->n_C, e->v_4, a4);
}
