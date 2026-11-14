/* LEVEL_19:0x027C18 -- placement copy of LEVEL_01_02A628.c: sets the global timer to 150 when the argument is non-null. */
extern int D_001A3144;

void func_027C18(void *p)
{
    if (p != 0) {
        D_001A3144 = 150;
    }
}
