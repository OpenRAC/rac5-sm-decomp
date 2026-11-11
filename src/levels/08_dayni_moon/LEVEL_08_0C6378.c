extern unsigned char D_002458E5;
extern unsigned char D_002458E4;
extern unsigned char D_002458E6;
void func_0C6378(void)
{
    --D_002458E5;
    if (D_002458E5 == 0) {
        D_002458E5 = D_002458E6;
        D_002458E4 ^= 1;
    }
}