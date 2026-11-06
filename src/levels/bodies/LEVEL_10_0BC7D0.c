extern unsigned char D_00205A25;
extern unsigned char D_00205A24;
extern unsigned char D_00205A26;
void func_0BC7D0(void)
{
    --D_00205A25;
    if (D_00205A25 == 0) {
        D_00205A25 = D_00205A26;
        D_00205A24 ^= 1;
    }
}