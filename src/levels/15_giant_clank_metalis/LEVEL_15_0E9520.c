/* LEVEL_15:0x0E9520 -- reset the little record when the marker is 0xFFFF.

   The retail reads the global with a non canonical page (`lui` of the page
   then `addiu` of the offset), so the symbol carries the page and the
   offset stays in the expression; the address is computed inside the branch,
   as the retail does.  The four stores are in the retail's order: the word
   at +0, the float at +0xC, then the two words. */
typedef struct {
    int a00;
    int a04;
    int a08;
    float a0C;
} Rec;

extern char D_00270000[];

void func_0E9520(void *a0, unsigned int flag)
{
    if (flag == 0xFFFFu && a0 != 0) {
        Rec *rec = (Rec *)((char *)D_00270000 - 0x7130);

        rec->a00 = 0;
        rec->a0C = 1.0f;
        rec->a08 = 0;
        rec->a04 = 0;
    }
}
