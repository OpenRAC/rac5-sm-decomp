/* LEVEL_03:0x15A518 -- placement copy of LEVEL_01_160510.c: runs the helper on the source with the flag set when the id is 0xB; returns 3 when it reported success, otherwise 0. */
extern int func_15A7F8(char *a0, int a1, int a2, int a3);

int func_15A518(char *src, int id)
{
    if (func_15A7F8(src, 0, id == 0xB, 0) != 0) {
        return 3;
    }
    return 0;
}
