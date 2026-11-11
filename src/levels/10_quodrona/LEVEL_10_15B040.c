/* LEVEL_10:0x15B040 -- placement copy of LEVEL_03_159048.c: runs the helper on the source with the flag set when the id is 0xB; returns 3 when it reported success, otherwise 0. */
typedef struct Src Src;

extern int func_159370(Src *s, int a, int flag, int b);

int func_15B040(Src *src, int id)
{
    if (func_159370(src, 0, id == 0xB, 1) != 0) {
        return 3;
    }
    return 0;
}
