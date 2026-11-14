/* LEVEL_06:0x19B270 -- looks up the handles of two fixed keys and keeps them in globals. */
extern int D_001F7BD4;
extern int D_001F7BD8;
extern int func_1206C0(unsigned int value);

void func_19B270(void)
{
    D_001F7BD4 = func_1206C0(0x7d175f5eu);
    D_001F7BD8 = func_1206C0(0x82ab52a7u);
}
