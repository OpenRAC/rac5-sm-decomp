/* FRONTEND:0x0003F0 -- decrements the counter at 0x27E0C and clears 0x27E10
   when the counter reaches zero. */
extern int D_00027E0C;
extern int D_00027E10;

void func_0003F0(void)
{
    int count = D_00027E0C - 1;

    D_00027E0C = count;
    if (count == 0)
        D_00027E10 = 0;
}
