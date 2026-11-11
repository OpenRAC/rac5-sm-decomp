/* LEVEL_07:0x15F5E0 -- placement copy of LEVEL_03_159048.c: runs the helper on the source with the flag set when the id is 0xB; returns 3 when it reported success, otherwise 0. */
typedef struct Src Src;

extern int func_15D910(Src *s, int a, int flag, int b);

int func_15F5E0(Src *src, int id)
{
    if (func_15D910(src, 0, id == 0xB, 1) != 0) {
        return 3;
    }
    return 0;
}
