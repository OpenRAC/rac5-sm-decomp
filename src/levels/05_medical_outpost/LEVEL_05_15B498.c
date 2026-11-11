/* LEVEL_05:0x15B498 -- scales the first two floats of each of the seven table records by 0.57. */
typedef struct Rec {
    float a, b, c, d;
} Rec;

extern Rec D_001F6690[7];

void func_15B498(void)
{
    unsigned int i;
    for (i = 0; i < 7; i++) {
        D_001F6690[i].a = D_001F6690[i].a * 0.57f;
        D_001F6690[i].b = D_001F6690[i].b * 0.57f;
    }
}
