/* FRONTEND:0x006158 -- resets the global record's matrix to identity and sets a flag byte inside the record at its stored offset. */
typedef struct {
    char pad_00[4];
    int offset;
    char pad_08[8];
    float *m;
} Rec;

extern Rec D_0010EA90;

void LoadIdentity__Q34scee3Psp3Gumv(void)
{
    float *m = D_0010EA90.m;

    m[0] = 1.0f; m[1] = 0.0f; m[2] = 0.0f; m[3] = 0.0f;
    m[4] = 0.0f; m[5] = 1.0f; m[6] = 0.0f; m[7] = 0.0f;
    m[8] = 0.0f; m[9] = 0.0f; m[10] = 1.0f; m[11] = 0.0f;
    m[12] = 0.0f; m[13] = 0.0f; m[14] = 0.0f; m[15] = 1.0f;
    *((char *)&D_0010EA90 + D_0010EA90.offset + 8) = 1;
}
