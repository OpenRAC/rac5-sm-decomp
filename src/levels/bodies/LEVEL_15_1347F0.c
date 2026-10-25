/* LEVEL_15:0x1347F0 -- 116 bytes, 2 placements.
   A due-time test: the handle comes from the first helper; the second gives a
   value that is compared with the third plus one frame (1/30 s). */
extern int func_1345E8(void);
extern float func_1347B0(void);
extern float func_134760(int handle);

int func_1347F0(void)
{
    int handle;
    float a;
    float b;
    int r;

    handle = func_1345E8();
    if (handle == -1)
        return 1;
    a = func_1347B0();
    b = func_134760(handle);
    a = a + 0.033333335f;
    r = 1;
    if (b <= a) {
    } else {
        r = 0;
    }
    return r;
}
