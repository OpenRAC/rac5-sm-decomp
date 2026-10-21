/* LEVEL_07:0x014C38 -- asks the engine for a float; if the engine answered,
   the caller's first record gets it in its second slot, and the caller's
   second pointer, when not null, gets it in its first slot. */
void *func_014C88(void *a, void *b);

void func_014C38(void *a0, void *a1)
{
    float f;
    if (func_014C88(a0, &f) != 0) {
        *(float *)((char *)a0 + 4) = f;
    }
    if (a1 != 0) {
        *(float *)a1 = f;
    }
}
