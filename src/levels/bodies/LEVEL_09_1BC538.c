/* LEVEL_09:0x1BC538 -- adds the argument to a global float, under a flag. */
typedef struct {
    float value;
    unsigned char flag;
} Rec;

extern Rec D_003803D8;

void func_1BC538(float a0)
{
    if (D_003803D8.flag == 0) {
        float v = D_003803D8.value + a0;
        D_003803D8.value = v;
        if (v > 15.0f) {
            D_003803D8.flag = 1;
        }
    }
}
