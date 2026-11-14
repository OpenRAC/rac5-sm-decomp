/* LEVEL_16:0x13CAA0 -- placement copy of LEVEL_01_160510.c: runs the helper on the source with the flag set when the id is 0xB; returns 3 when it reported success, otherwise 0. */
extern int func_13CD90(char *a0, int a1, int a2, int a3);

int func_13CAA0(char *src, int id)
{
    if (func_13CD90(src, 0, id == 0xB, 0) != 0) {
        return 3;
    }
    return 0;
}
