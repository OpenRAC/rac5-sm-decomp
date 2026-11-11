/* LEVEL_23:0x17D040 -- placement copy of LEVEL_22_130360.c: counts down a timer field, calls two helpers when a flag is set, and dispatches on zero. */

void func_0B30D0(int a0);
void func_09CD40(int a0, unsigned int a1, int a2, int a3, int t0, int t1);
void func_05ADA8(float f12);
int func_09CD78(int a0);
void func_17CAE0(char *obj, unsigned char a1, int a2);

void func_17D040(char *obj)
{
    char *s0;

    s0 = *(char **)(obj + 0x58);
    func_0B30D0(0x16);
    func_09CD40(0, 0xFF000000u, 0x20, 0x20, 3, 0);
    if ((unsigned int)(*(unsigned char *)(s0 + 0xAC) - 2) < 2) {
        func_05ADA8(0.0f);
    }
    *(float *)(obj + 0x70) = *(float *)(obj + 0x70) - 1.0f;
    if (!(*(float *)(obj + 0x70) <= 0.0f)) {
        if (func_09CD78(0) == 0) {
            return;
        }
    }
    func_17CAE0(obj, *(unsigned char *)(obj + 0x45), 7);
}
