/* LEVEL_10:062388 -- publishes the object's timer, refreshes it when it is in
   the twelfth state and raises the global ready flag. */
typedef struct { char pad[0x44]; unsigned char b_44; } Flags;
extern float D_001FD990;
extern Flags D_00242558;
extern void func_069870(void *a0, int a1);
void func_062388(char *a0)
{
    D_001FD990 = *(float *)(a0 + 0x96C);
    if (*(unsigned short *)(a0 + 0x108) == 0xC) {
        func_069870(a0, 0);
    }
    D_00242558.b_44 |= 2;
}
