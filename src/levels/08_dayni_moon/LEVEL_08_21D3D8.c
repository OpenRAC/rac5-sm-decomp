/* LEVEL_08.REL:0x21D3D8 -- advances the record's +0x70 float by the global
   rate and, once it passes 5, fires func_0845F8 and reports success. */
typedef struct {
    unsigned char pad0[0x70];
    float v_70;
} Rec;

extern float D_00280BAC;

extern void func_0845F8(void *a0, int flag);

int func_21D3D8(Rec *a0)
{
    float total = a0->v_70 + D_00280BAC;

    a0->v_70 = total;
    if (total > 5.0f) {
        func_0845F8(a0, 1);
        return 1;
    }
    return 0;
}
