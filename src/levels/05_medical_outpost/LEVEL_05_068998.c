/* LEVEL_05:0x068998 -- placement copy of LEVEL_01_06AD30.c: draws a fade quad scaled by the alpha value at a state offset when it is positive. */
extern void func_09F188(int, int, int, int, int);
extern void func_0A3980(int, int, int, int, unsigned int, unsigned int);

void func_068998(char *state)
{
    float alpha = *(float *)(state + 0xf9c);

    if (!(alpha <= 0.0f)) {
        int color = (int)(alpha * 255.9f);

        func_09F188(0, 2, 3, 0, 0);
        func_0A3980(0, 0, 512, 416, ((unsigned int)color << 24) | 0xffu, 0xffffffu);
    }
}
