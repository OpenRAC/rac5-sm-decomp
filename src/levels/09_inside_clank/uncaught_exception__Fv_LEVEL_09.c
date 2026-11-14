/* LEVEL_09:0x1D6820 -- placement copy of LEVEL_01_1EC9B8.c: tells whether the current entry exists and has an empty owner field. */
struct Inner {
    char pad00[0x14];
    int w14;
};

extern struct Inner **func_1D53C8(void);

int uncaught_exception__Fv(void)
{
    struct Inner **slot = func_1D53C8();
    int r = 0;

    if (*slot != 0)
        r = (*slot)->w14 == 0;
    return r;
}
