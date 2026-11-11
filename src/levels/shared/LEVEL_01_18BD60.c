/* LEVEL_01:0x18BD60 -- stores a random angle in [0, 2*pi) into the second float of the object's record and returns 1. */
extern int rand(void);

int func_18BD60(char *object)
{
    float *angles = *(float **)(object + 0x54);

    angles[1] = (float)rand() * 4.656613e-10f * 6.2831855f;
    return 1;
}
