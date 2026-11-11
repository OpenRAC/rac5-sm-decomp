/* LEVEL_02:0x068578 -- placement copy of LEVEL_10_062388.c. */
/* LEVEL_10:062388 -- publishes the object's timer, refreshes it when it is in
   the twelfth state and raises the global ready flag. */
typedef struct { char pad[0x44]; unsigned char b_44; } Flags;
extern float D_00209950;
extern Flags D_00250668;
extern void func_06FAD8(void *a0, int a1);
void func_068578(char *a0)
{
    D_00209950 = *(float *)(a0 + 0x96C);
    if (*(unsigned short *)(a0 + 0x108) == 0xC) {
        func_06FAD8(a0, 0);
    }
    D_00250668.b_44 |= 2;
}
