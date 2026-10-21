/* LEVEL_10:0x07D5E8 -- calls the helper, hands the result to the second
   routine through the two records and gives it back. */
extern float func_07D4E0(void *a0, void *a1);
extern void func_123238(void *a0, void *a1, void *a2);

float func_07D5E8(void *a0, void *a1)
{
    float r = func_07D4E0(a0, a1);

    func_123238(a1, a1, a0);
    return r;
}
