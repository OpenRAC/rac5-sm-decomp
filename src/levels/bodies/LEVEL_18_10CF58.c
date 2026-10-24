/* LEVEL_18:10CF58 -- forwards the caller's handle and the global descriptor's
   four floats to the level's routine. */
extern int D_001B5EBC;
extern void func_072BC8(void *a0, void *a1, int a2, int a3, int a4, int a5,
                        int a6, int a7, float f1, float f2, float f3, float f4);

void func_10CF58(void *a0)
{
    int g = D_001B5EBC;

    if (g != 0) {
        func_072BC8(a0, (void *)g, 0, 0, 0, 0, 0, 1,
                    *(float *)(g + 0x14), *(float *)(g + 0x18),
                    *(float *)(g + 0x1C), *(float *)(g + 0x20));
    }
}
