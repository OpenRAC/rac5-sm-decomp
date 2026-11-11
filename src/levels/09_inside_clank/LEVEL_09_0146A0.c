/* LEVEL_09.REL:0146A0 -- asks func_0146F0 for a float into a stack slot and
   copies it into the record at 0x4, then into the optional output pointer. */
typedef struct {
    char pad_00[0x4];
    float f_04;
} Rec;

extern int func_0146F0(void *a0, float *a1, int b, float x);

void func_0146A0(Rec *a0, float *a1, int b, float x)
{
    float v;

    if (func_0146F0(a0, &v, b, x)) {
        a0->f_04 = v;
    }
    if (a1) {
        *a1 = v;
    }
}
