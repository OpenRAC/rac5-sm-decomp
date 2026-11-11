/* FRONTEND:0x007A18 -- sets the texture state of the current display list: slot 1, no flags, mask word 0x44 and the high-bit mask. */
typedef unsigned long u64;

extern char db_dlist[];
extern void dlib_displist_set_texture_state__FP13DLIB_DISPLISTiUlUlUlUl(void *, int, u64, u64, u64, u64);

void UTIL_SetupTextureState__Fv(void)
{
    dlib_displist_set_texture_state__FP13DLIB_DISPLISTiUlUlUlUl(*(void **)(db_dlist + 0x54), 1, 0, 1, 0x44, 0x7F00000000UL);
}
