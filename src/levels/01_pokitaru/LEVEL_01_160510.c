/* LEVEL_01:0x160510 -- runs the helper on the source with the flag set when the id is 0xB; returns 3 when it reported success, otherwise 0. */
extern int func_1607F0(char *a0, int a1, int a2, int a3);

int func_160510(char *src, int id)
{
    if (func_1607F0(src, 0, id == 0xB, 0) != 0) {
        return 3;
    }
    return 0;
}
