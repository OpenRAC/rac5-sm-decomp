/* LEVEL_01.REL:0x029468 -- decides whether the object still needs work: a
   non-zero a1 forces it, otherwise neither of the two timers (+0x58, +0x84)
   may still be live. */
int func_029468(int a0, int a1)
{
    if (a1 == 0 && (*(float *)(a0 + 0x58) > 0.0001f ||
                    *(float *)(a0 + 0x84) > 0.0001f)) {
        return 0;
    }
    *(char *)(a0 + 0x1A8) = a1;
    *(char *)(a0 + 0x164) = a1;
    *(char *)(a0 + 0x120) = a1;
    return 1;
}
