/* LEVEL_19:0F1F90 -- forwards the caller's record to the level's routine with
   the global handle at +8, an optional caller buffer and the record's float. */
extern int D_001B5A38;
extern void func_0F1FD0(void *a0, void *a1, int a2, void *a3, float f12);

void func_0F1F90(char *a0, char *a1, char *a2)
{
    char buf[0x10];

    func_0F1FD0(a2 != 0 ? a2 : buf, a0, *(int *)(D_001B5A38 + 8), a1,
                *(float *)(a1 + 0xC));
}
