/* LEVEL_15:0x000528 -- returns the slot at +0x10 of the object held by the
   shared record. */
typedef struct {
    char pad_00[0x10];
    float f_10;
} G;

extern G *D_0017D890;
extern G *func_000658(G *g);

float func_000528(void)
{
    return func_000658(D_0017D890)->f_10;
}
