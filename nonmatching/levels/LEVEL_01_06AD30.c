/* LEVEL_01.REL:0x06AD30: Defined C links 212/136 bytes; first differs at +28.
 * Retry: Prove alpha*255.9 is finite and in signed-int range on every reachable
 * conversion path, or reproduce R5900 cvt.w.s invalid-input behavior in defined byte-
 * exact C. The retained range check is not a match.
 * No C matching credit.
 */
typedef unsigned int u32;

extern void func_0A0BC8(int, int, int, int, int);
extern void func_0A53C0(int, int, int, int, u32, u32);

void func_06AD30(char *state)
{
    float alpha = *(float *)(state + 0xf9c);
    if (!(alpha <= 0.0f)) {
        float scaled = alpha * 255.9f;
        int color;
        if (scaled == scaled && scaled >= -2147483648.0f &&
            scaled < 2147483648.0f)
            color = (int)scaled;
        else
            color = -2147483647 - 1;
        func_0A0BC8(0, 2, 3, 0, 0);
        func_0A53C0(0, 0, 512, 416, ((u32)color << 24) | 0xffu, 0xffffffu);
    }
}
