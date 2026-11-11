/* LEVEL_02:0x160D58 -- copies the three floats of the pair into the record
   pointed to by the caller's record. */
void func_160D58(void *a0, float *a1)
{
    float *p = (float *)((char *)*(void **)((char *)a0 + 0x58) + 0x24);
    p[0] = a1[0];
    p[1] = a1[1];
    p[2] = a1[2];
}
