extern unsigned char D_001AEC48[];
extern int D_001AEC1C;
extern int D_001AEC20;

void func_10FBF8(void);

void func_0B4CD0(void)
{
    if (D_001AEC48[0] != 0)
    {
        func_10FBF8();
    }
    D_001AEC48[0] = 0;
    D_001AEC1C = 0;
    D_001AEC20 = 0;
}
