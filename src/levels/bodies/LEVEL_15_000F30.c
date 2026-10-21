/* LEVEL_15:0x000F30 -- returns the float stored at 0xF8 inside the object
   pointed to by the global pointer D_143EB0. */
extern void *D_143EB0;

float func_000F30(void)
{
    return *(float *)((char *)D_143EB0 + 0xF8);
}
