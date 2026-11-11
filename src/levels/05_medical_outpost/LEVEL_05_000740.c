/* LEVEL_05:0x000740 -- returns the slot at +0x10 of the object held by the
   shared record. */
typedef struct {
    char pad_00[0x10];
    float f_10;
} G;

extern G *D_00221410;
extern G *func_0008A8(G *g);

float func_000740(void)
{
    return func_0008A8(D_00221410)->f_10;
}
