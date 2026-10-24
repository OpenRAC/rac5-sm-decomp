/* LEVEL_15:001590 -- applies the object's state-specific update. */
extern void func_001498(void *a0, float f12, float f13);
void func_001590(char *a0, float f12)
{
    switch (*(int *)(a0 + 0x10)) {
    case 0:
        func_001498(a0, f12, *(float *)(a0 + 0x4));
        break;
    case 1:
        *(float *)a0 = *(float *)a0 + f12 * *(float *)(a0 + 0x4);
        break;
    }
}
