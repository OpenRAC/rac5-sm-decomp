/* LEVEL_18:0x036E20 -- placement copy of LEVEL_16_0385E0.c: after the pre-call, accepts a request value in the window 0x28..0x33 when the object's mode half-word (+0x100) is outside 0x29..0x32 and the check call reports no block; marks the linked block (+0x59C, if any) with flag 8, stores the value at +0x102 and calls the follow-up routine. */
extern void func_0226C8(void);
extern int func_1134D0(char *object);
extern void func_039A38(char *object);

static __inline__ int Outside(int v, int lo, int hi)
{
    return v > hi || v < lo;
}

void func_036E20(char *object, int value)
{
    unsigned char outside;
    char *link;

    func_0226C8();
    outside = Outside(value, 0x28, 0x33);
    if (!outside && (unsigned short)(*(unsigned short *)(object + 0x100) - 0x29) > 9 && func_1134D0(object) == 0) {
        link = *(char **)(object + 0x59C);
        if (link != 0) {
            *(unsigned int *)(link + 0x64) |= 8;
        }
        *(short *)(object + 0x102) = value;
        func_039A38(object);
    }
}
