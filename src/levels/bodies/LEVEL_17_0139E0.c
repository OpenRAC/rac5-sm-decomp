/* LEVEL_17.REL:0139E0 -- asks func_013A38 for a float into a stack slot
   (with the caller's selector, a size of 0x38 and a zero) and copies it into
   the record at 0x4, then into the optional output pointer. */
typedef struct {
    char pad_00[0x4];
    float f_04;
} Rec;

extern int func_013A38(void *a0, float *a1, int a2, int a3, int a4);

void func_0139E0(Rec *a0, float *a1, int a2)
{
    float v;

    if (func_013A38(a0, &v, a2, 0x38, 0)) {
        a0->f_04 = v;
    }
    if (a1) {
        *a1 = v;
    }
}
