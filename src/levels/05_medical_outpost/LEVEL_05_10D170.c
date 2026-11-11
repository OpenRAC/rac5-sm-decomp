/* LEVEL_05:10D170 -- forwards the caller's records to the level's routine with
   the global handle at +8, an optional caller buffer and the record's float. */
extern int D_001F5E28;
extern void func_10D1B0(void *a0, void *a1, int a2, void *a3, float f12);
void func_10D170(char *a0, char *a1, char *a2)
{
    char buf[0x10];

    func_10D1B0(a2 != 0 ? a2 : buf, a0, *(int *)(D_001F5E28 + 8), a1,
                *(float *)(a1 + 0xC));
}
