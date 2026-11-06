extern unsigned char D_001EB925;
extern unsigned char D_001EB924;
extern unsigned char D_001EB926;
void func_0B5D88(void)
{
    --D_001EB925;
    if (D_001EB925 == 0) {
        D_001EB925 = D_001EB926;
        D_001EB924 ^= 1;
    }
}