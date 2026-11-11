/* LEVEL_22:0x13D5A8 -- adds the argument to a global float, under a flag. */
typedef struct {
    float value;
    unsigned char flag;
} Rec;

extern Rec D_002E85F8;

void func_13D5A8(float a0)
{
    if (D_002E85F8.flag == 0) {
        float v = D_002E85F8.value + a0;
        D_002E85F8.value = v;
        if (v > 15.0f) {
            D_002E85F8.flag = 1;
        }
    }
}
