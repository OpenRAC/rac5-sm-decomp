/* LEVEL_01:0x04E358 -- moves a pointed record's float into the caller's
   record and folds the difference into a second float. */
void func_04E358(void *a0)
{
    void *v0 = *(void **)((char *)a0 + 0x334);
    if (v0 != 0) {
        float f0 = *(float *)((char *)v0 + 0x34);
        float f1 = *(float *)((char *)a0 + 0x33C);
        float f2 = *(float *)((char *)a0 + 0x2E0);
        f1 = f0 - f1;
        *(float *)((char *)a0 + 0x33C) = f0;
        f2 = f2 + f1;
        *(float *)((char *)a0 + 0x2E0) = f2;
    }
}
