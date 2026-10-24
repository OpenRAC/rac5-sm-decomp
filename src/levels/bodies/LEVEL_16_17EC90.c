/* LEVEL_16:17EC90 -- fires the level's routine once the object's field at
   +0x70 has passed two and a half. */
extern void func_06F940(void *a0, int a1);
void func_17EC90(char *a0)
{
    if (*(float *)(a0 + 0x70) > 2.5f) {
        func_06F940(a0, 1);
    }
}
