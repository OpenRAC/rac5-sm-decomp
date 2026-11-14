/* LEVEL_18:0x027620 -- placement copy of LEVEL_01_02A628.c: sets the global timer to 150 when the argument is non-null. */
extern int D_001A3444;

void func_027620(void *p)
{
    if (p != 0) {
        D_001A3444 = 150;
    }
}
