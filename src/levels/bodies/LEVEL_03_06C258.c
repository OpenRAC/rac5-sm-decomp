/* LEVEL_03.REL:0x06C258 -- shifts the three pointer arguments down one place
   and forwards the record's +0x1F8 float with a zero fourth word. */
typedef struct {
    unsigned char pad0[0x1F8];
    float v_1F8;
} Rec;

extern void func_06C288(void *a0, void *a1, void *a2, int a3, float f);

void func_06C258(Rec *a0, void *a1, void *a2, void *a3)
{
    func_06C288(a1, a2, a3, 0, a0->v_1F8);
}
