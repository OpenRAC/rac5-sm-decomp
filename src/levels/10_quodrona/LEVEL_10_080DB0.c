/* LEVEL_10:080DB0 -- runs the level's routine and arms the tail slot. */
extern void func_080DE0(void *a0);
void func_080DB0(void *a0, char *a1)
{
    func_080DE0(a0);
    *(float *)(a1 + 0xC) = 1.0f;
}
