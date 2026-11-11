/* LEVEL_20:0x032700 -- placement copy of LEVEL_16_0385E0.c: after the pre-call, accepts a request value in the window 0x28..0x33 when the object's mode half-word (+0x100) is outside 0x29..0x32 and the check call reports no block; marks the linked block (+0x59C, if any) with flag 8, stores the value at +0x102 and calls the follow-up routine. */
extern void func_01FD28(void);
extern int func_0E70B8(char *object);
extern void func_035318(char *object);

static __inline__ int Outside(int v, int lo, int hi)
{
    return v > hi || v < lo;
}

void func_032700(char *object, int value)
{
    unsigned char outside;
    char *link;

    func_01FD28();
    outside = Outside(value, 0x28, 0x33);
    if (!outside && (unsigned short)(*(unsigned short *)(object + 0x100) - 0x29) > 9 && func_0E70B8(object) == 0) {
        link = *(char **)(object + 0x59C);
        if (link != 0) {
            *(unsigned int *)(link + 0x64) |= 8;
        }
        *(short *)(object + 0x102) = value;
        func_035318(object);
    }
}
