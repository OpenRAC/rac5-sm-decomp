/* LEVEL_16:0x198458 -- placement copy of LEVEL_01_1EC9B8.c: tells whether the current entry exists and has an empty owner field. */
struct Inner {
    char pad00[0x14];
    int w14;
};

extern struct Inner **func_197000(void);

int uncaught_exception__Fv(void)
{
    struct Inner **slot = func_197000();
    int r = 0;

    if (*slot != 0)
        r = (*slot)->w14 == 0;
    return r;
}
