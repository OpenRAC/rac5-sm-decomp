/* LEVEL_03:0x159048 -- runs the helper on the source with the flag set when the id is 0xB; returns 3 when it reported success, otherwise 0. */
typedef struct Src Src;

extern int func_158748(Src *s, int a, int flag, int b);

int func_159048(Src *src, int id)
{
    if (func_158748(src, 0, id == 0xB, 1) != 0) {
        return 3;
    }
    return 0;
}
