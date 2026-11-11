/* LEVEL_10:0x1D99E0 -- adds the caller's float to the stored value and
   latches the result once it passes the threshold. */
typedef struct {
    float value;
    unsigned char flag;
} Rec;

extern Rec D_003A22F8;

void func_1D99E0(float f12)
{
    if (D_003A22F8.flag == 0) {
        float v = D_003A22F8.value + f12;
        D_003A22F8.value = v;
        if (v > 15.0f) {
            D_003A22F8.flag = 1;
        }
    }
}
