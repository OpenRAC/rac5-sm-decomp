/* LEVEL_19:0x148208 -- copies two three-float vectors out of the float
   array that the record points to: the first vector starts at float 18 of
   the array, the second at float 14. */
typedef struct {
    char pad_00[0x58];
    float *sub;
} Rec;

void func_148208(Rec *a0, float *a1, float *a2)
{
    float *p = a0->sub;

    a1[0] = p[18];
    p += 18;
    a1[1] = p[1];
    a1[2] = p[2];
    p = a0->sub;
    a2[0] = p[14];
    p += 14;
    a2[1] = p[1];
    a2[2] = p[2];
}
