/* LEVEL_19:0x113230 -- placement copy of LEVEL_16_112A88.c: masks three byte arguments, calls a helper, then tests one masked argument selected by its result. */
extern unsigned int func_1135A8(void);

int func_113230(int a0, int a1, int a2)
{
    unsigned int b0;
    unsigned int b1;
    unsigned int b2;
    int m;

    b0 = a0 & 0xFF;
    b1 = a1 & 0xFF;
    b2 = a2 & 0xFF;
    m = func_1135A8();
    if (m == 0) {
        return b0 == 0;
    }
    if (m == 1) {
        return b1 == 0;
    }
    if (m == 2) {
        return b2 == 0;
    }
    return 0;
}
