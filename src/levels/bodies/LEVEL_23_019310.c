/* LEVEL_23:0x019310 -- copy the global vector into the caller's vector.

   The retail loads the global with a non canonical page: `lui 0x20` then
   `addiu -12184`, which is 0x1D068.  The symbol carries the page the retail
   loads and the offset stays in the expression. */

typedef struct {
    float x;
    float y;
    float z;
} V3;

extern char D_00200000[];

V3 *func_019310(V3 *dst)
{
    *dst = *(V3 *)((char *)D_00200000 - 12184);

    return dst;
}
