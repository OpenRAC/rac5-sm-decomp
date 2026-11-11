/* LEVEL_17:0F0F58 -- forwards the caller's record to the level's routine with
   the global handle at +8, an optional caller buffer and the record's float. */
extern int D_001A7EB8;
extern void func_0F0F98(void *a0, void *a1, int a2, void *a3, float f12);

void func_0F0F58(char *a0, char *a1, char *a2)
{
    char buf[0x10];

    func_0F0F98(a2 != 0 ? a2 : buf, a0, *(int *)(D_001A7EB8 + 8), a1,
                *(float *)(a1 + 0xC));
}
