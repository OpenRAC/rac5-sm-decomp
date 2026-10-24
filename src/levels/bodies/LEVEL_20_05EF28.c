/* LEVEL_20.REL:05EF28 -- reads the level's value, hands the pair to the
   shared routine and returns the value it read. */
extern float func_05EE20(void *a0, void *a1);
extern void func_0DC2B0(void *a0, void *a1, void *a2);

float func_05EF28(void *a0, void *a1)
{
    float v = func_05EE20(a0, a1);

    func_0DC2B0(a1, a1, a0);
    return v;
}
