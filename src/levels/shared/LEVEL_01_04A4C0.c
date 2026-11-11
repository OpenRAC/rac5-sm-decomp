/* LEVEL_01:0x04A4C0 -- moves the state of the record to two when its float
   field became negative. */
void func_04A4C0(void *a0)
{
    if (*(int *)((char *)a0 + 0x168) == 1) {
        if (*(float *)((char *)a0 + 0x1B8) < 0.0f) {
            *(int *)((char *)a0 + 0x168) = 2;
        }
    }
}
