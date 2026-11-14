/* LEVEL_01:0x1EC9B8 -- tells whether the current entry exists and has an empty owner field. */
struct Inner {
    char pad00[0x14];
    int w14;
};

extern struct Inner **func_1EB560(void);

int uncaught_exception__Fv(void)
{
    struct Inner **slot = func_1EB560();
    int r = 0;

    if (*slot != 0)
        r = (*slot)->w14 == 0;
    return r;
}
