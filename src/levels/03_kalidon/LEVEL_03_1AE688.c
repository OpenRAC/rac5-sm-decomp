/* LEVEL_03:1AE688 -- drains the object's timer at +0x70 and fires the level's
   routine once it has run out. */
extern void func_07C468(void *a0, int a1);
void func_1AE688(char *a0, float f12)
{
    float v = *(float *)(a0 + 0x70) - f12;

    *(float *)(a0 + 0x70) = v;
    if (v <= 0.0f) {
        func_07C468(a0, 1);
    }
}
