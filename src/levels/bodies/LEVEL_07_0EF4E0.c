/* LEVEL_07:0EF4E0 -- attaches the source record to the object and derives the
   reciprocal of the source's first float. */
extern void func_099458(void *a0, void *a1, int a2);

void func_0EF4E0(char *a0, void *a1, char *a2)
{
    func_099458(a0, a1, 1);
    *(void **)(a0 + 0x14) = a2;
    *(float *)(a0 + 0x18) = 1.0f / *(float *)a2;
    *(int *)(a0 + 0x1C) = 0;
}
