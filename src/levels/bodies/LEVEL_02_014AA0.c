/* LEVEL_02:0x014AA0 -- placement copy of LEVEL_03_014078.c. */
/* LEVEL_03:014078 -- asks func_014AF8 for a float (size 0x38) and copies it
   into both records when they are non-null. */
int func_014AF8(int a0, float *out, int a2, int a3, int a4);

void func_014AA0(int a0, int a1, int a2)
{
    float v;

    if (func_014AF8(a0, &v, a2, 0x38, 0)) {
        *(float *)(a0 + 4) = v;
    }
    if (a1 != 0) {
        *(float *)a1 = v;
    }
}
