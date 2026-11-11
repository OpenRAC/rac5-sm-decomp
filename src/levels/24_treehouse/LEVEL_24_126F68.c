/* LEVEL_24:126F68 -- when the global object exists, hands its four floats and
   the seven word arguments to func_07B0B0. */
extern char *D_001D7BAC;

void func_07B0B0(int a0, int a1, int a2, int a3, int a4, int a5, int a6,
                 int a7, float f12, float f13, float f14, float f15);

void func_126F68(int a0)
{
    char *p = D_001D7BAC;

    if (p != 0) {
        func_07B0B0(a0, (int)p, 0, 0, 0, 0, 0, 1,
                    *(float *)(p + 0x14), *(float *)(p + 0x18),
                    *(float *)(p + 0x1C), *(float *)(p + 0x20));
    }
}
