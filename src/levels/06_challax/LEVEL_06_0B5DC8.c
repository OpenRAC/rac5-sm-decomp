/* LEVEL_06:0B5DC8 -- picks the sample matching the current flag. */
extern unsigned char D_001EB924;
extern float D_001EB92C;
extern float D_001EB928;
float func_0B5DC8(void)
{
    if (D_001EB924) {
        return D_001EB92C;
    }
    return D_001EB928;
}
