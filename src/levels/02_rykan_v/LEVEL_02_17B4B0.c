/* LEVEL_02:0x17B4B0 -- advances a linked record's timer by one frame and
   copies back the owner's timer when the linked one has fallen behind. */
void func_17B4B0(void *a0)
{
    void *v1 = *(void **)((char *)a0 + 0x54);
    float f1 = 1.0f / 60.0f;
    void *v0 = *(void **)((char *)v1 + 0x0);
    float f0 = *(float *)((char *)v0 + 0x34);

    f0 = f0 - f1;
    *(float *)((char *)v0 + 0x34) = f0;

    v1 = *(void **)((char *)v1 + 0x0);
    f1 = *(float *)((char *)a0 + 0x34);
    f0 = *(float *)((char *)v1 + 0x34);
    if (f0 < f1) {
        *(float *)((char *)v1 + 0x34) = f1;
        *(unsigned char *)((char *)a0 + 0x45) = 1;
    }
}
