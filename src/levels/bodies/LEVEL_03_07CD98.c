/* LEVEL_03.REL:0x07CD98 -- reads the frame's weight, passes it on, returns it. */
extern float func_07CC90(void *a0, void *a1);
extern void func_123310(void *a0, void *a1, void *a2);
float func_07CD98(void *a0, void *a1)
{
    void *second = a1;
    float r = func_07CC90(a0, a1);

    func_123310(second, second, a0);
    return r;
}
