/* LEVEL_01:0x02A628 -- sets the global timer to 150 when the argument is non-null. */
extern int D_001F4494;

void func_02A628(void *p)
{
    if (p != 0) {
        D_001F4494 = 150;
    }
}
