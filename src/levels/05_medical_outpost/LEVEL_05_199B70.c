/* LEVEL_05:0x199B70 -- looks up the handles of two fixed keys and keeps them in globals. */
extern int D_001F7BB4;
extern int D_001F7BB8;
extern int func_1259E0(unsigned int value);

void func_199B70(void)
{
    D_001F7BB4 = func_1259E0(0x84DE7FF4u);
    D_001F7BB8 = func_1259E0(0xE6E5E245u);
}
