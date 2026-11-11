/* LEVEL_08:001A58 -- applies the object's state-specific update. */
extern void func_001960(void *a0, float f12, float f13);
void func_001A58(char *a0, float f12)
{
    switch (*(int *)(a0 + 0x10)) {
    case 0:
        func_001960(a0, f12, *(float *)(a0 + 0x4));
        break;
    case 1:
        *(float *)a0 = *(float *)a0 + f12 * *(float *)(a0 + 0x4);
        break;
    }
}
