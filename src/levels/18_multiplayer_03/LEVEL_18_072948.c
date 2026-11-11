/* LEVEL_18.REL:0x072948 -- passes the second argument with the +0x30, +0x34
   and +0x38 floats of the first to func_103140. */
typedef struct {
    unsigned char pad0[0x30];
    float v_30;
    float v_34;
    float v_38;
} Rec;

extern void func_103140(void *a0, float x, float y, float z);

void func_072948(Rec *a0, void *a1)
{
    func_103140(a1, a0->v_30, a0->v_34, a0->v_38);
}
