extern unsigned char D_00215EE5;
extern unsigned char D_00215EE4;
extern unsigned char D_00215EE6;
void func_0C0C68(void)
{
    --D_00215EE5;
    if (D_00215EE5 == 0) {
        D_00215EE5 = D_00215EE6;
        D_00215EE4 ^= 1;
    }
}