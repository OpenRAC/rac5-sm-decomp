/* LEVEL_06:0x17FD18 -- looks up the handles of two fixed keys and keeps them in globals. */
extern int D_001F773C;
extern int D_001F7740;
extern int func_1206C0(unsigned int value);

void func_17FD18(void)
{
    D_001F773C = func_1206C0(0xFCEAA4B5u);
    D_001F7740 = func_1206C0(0x870043DEu);
}
