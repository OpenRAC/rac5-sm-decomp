/* LEVEL_24:02DC20 -- stores two words and a float into the record's header and
   hands the body to the level's routine. Followed by the record comparator. */
extern void func_02D970(void *a0, void *a1, void *a2);

void func_02DC20(char *a0, void *a1, void *a2, void *a3, int a4, int a5,
                 float f12)
{
    *(int *)(a0 + 0x4) = a4;
    *(float *)(a0 + 0x80) = f12;
    *(int *)(a0 + 0x0) = a5;
    func_02D970(a0 + 0x10, a2, a3);
}

int func_02DC58(char *a0, char *a1)
{
    return *(int *)a0 - *(int *)a1;
}
