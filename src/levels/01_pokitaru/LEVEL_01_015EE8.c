/* LEVEL_01:0x015EE8 -- stores a float or a zero word by mode value, returns a success flag. */
extern int D_0021A7F0;

int func_015EE8(float *out)
{
    switch (D_0021A7F0) {
    case 1:
        *out = -4.914999961853027f;
        return 1;
    case 16:
        *(int *)out = 0;
        return 1;
    }
    return 0;
}
