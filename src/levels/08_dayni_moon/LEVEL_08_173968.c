/* LEVEL_08:0x173968 -- placement copy of LEVEL_03_159048.c: runs the helper on the source with the flag set when the id is 0xB; returns 3 when it reported success, otherwise 0. */
typedef struct Src Src;

extern int func_171C98(Src *s, int a, int flag, int b);

int func_173968(Src *src, int id)
{
    if (func_171C98(src, 0, id == 0xB, 1) != 0) {
        return 3;
    }
    return 0;
}
