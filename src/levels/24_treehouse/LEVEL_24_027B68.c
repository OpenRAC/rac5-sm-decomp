/* LEVEL_24:0x027B68 -- placement copy of LEVEL_01_02A628.c: sets the global timer to 150 when the argument is non-null. */
extern int D_001C5114;

void func_027B68(void *p)
{
    if (p != 0) {
        D_001C5114 = 150;
    }
}
