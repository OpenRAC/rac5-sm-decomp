/* LEVEL_23:0x1994C8 -- placement copy of LEVEL_01_1B5FD0.c: clears the four-entry slot table. */
extern int D_001DC248[4];
void func_1994C8(void)
{
    int i;
    for (i = 0; i != 4; i++) {
        D_001DC248[i] = 0;
    }
}
