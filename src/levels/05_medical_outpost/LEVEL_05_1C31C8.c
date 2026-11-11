/* v07 : store outside the comparison, flag set inside */
typedef struct {
    float value;
    unsigned char flag;
} Rec;

extern Rec D_0038FF80;

void func_1C31C8(float f12)
{
    if (D_0038FF80.flag == 0) {
        float v = D_0038FF80.value + f12;
        D_0038FF80.value = v;
        if (v > 15.0f) {
            D_0038FF80.flag = 1;
        }
    }
}
