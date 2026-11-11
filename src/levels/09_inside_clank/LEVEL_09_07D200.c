/* LEVEL_09:07D200 -- runs the level's routine and arms the tail slot. */
extern void func_07D230(void *a0);
void func_07D200(void *a0, char *a1)
{
    func_07D230(a0);
    *(float *)(a1 + 0xC) = 1.0f;
}
