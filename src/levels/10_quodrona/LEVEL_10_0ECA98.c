/* LEVEL_10:0x0ECA98 -- calls func_097940, stores the third argument in the
   object and writes one divided by the float it points to. */
extern void func_097940(void *a0, void *a1, int a2);

void func_0ECA98(void *a0, void *a1, void *a2)
{
    func_097940(a0, a1, 1);
    *(void **)((char *)a0 + 0x14) = a2;
    *(float *)((char *)a0 + 0x18) = 1.0f / *(float *)a2;
}
