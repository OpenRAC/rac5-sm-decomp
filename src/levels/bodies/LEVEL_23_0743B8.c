/* LEVEL_23.REL:0x0743B8 -- reads the frame's weight, passes it on to the
   second object, and returns the weight. */
extern float func_0742B0(void *a0, void *a1);
extern void func_115DD8(void *a0, void *a1, void *a2);

float func_0743B8(void *a0, void *a1)
{
    void *second = a1;
    float r = func_0742B0(a0, a1);

    func_115DD8(second, second, a0);
    return r;
}
