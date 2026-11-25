/* LEVEL_05.REL:0147E8 -- asks func_014840 for a float into a stack slot
   (with the caller's selector, a size of 0x38 and a zero) and copies it into
   the record at 0x4, then into the optional output pointer. */
typedef struct {
    char pad_00[0x4];
    float f_04;
} Rec;

extern int func_014840(void *a0, float *a1, int a2, int a3, int a4);

int func_0147E8(Rec *a0, float *a1, int a2, float f)
{
    float v;
    int r;

    r = func_014840(a0, &v, a2, 0x38, 0);
    if (r) {
        a0->f_04 = v;
    }
    if (a1) {
        *a1 = v;
    }
    return r;
}
